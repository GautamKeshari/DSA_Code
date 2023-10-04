#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX_SIZE 30
float intervals[MAX_SIZE][3];

void merge_intervals(int low, int high)
{
    int mid = (low + high) / 2;
    int p1 = low, p2 = mid + 1, p = 0;
    float temp[high - low + 1][3];
    while (p1 <= mid && p2 <= high)
    {
        if (intervals[p1][0] < intervals[p2][0])
        {
            temp[p][0] = intervals[p1][0];
            temp[p][1] = intervals[p1][1];
            temp[p][2] = intervals[p1][2];
            p1++;
        }
        else if (intervals[p2][0] < intervals[p1][0])
        {
            temp[p][0] = intervals[p2][0];
            temp[p][1] = intervals[p2][1];
            temp[p][2] = intervals[p2][2];
            p2++;
        }
        else
        {
            if (intervals[p1][1] < intervals[p2][1])
            {
                temp[p][0] = intervals[p1][0];
                temp[p][1] = intervals[p1][1];
                temp[p][2] = intervals[p1][2];
                p1++;
            }
            else
            {
                temp[p][0] = intervals[p2][0];
                temp[p][1] = intervals[p2][1];
                temp[p][2] = intervals[p2][2];
                p2++;
            }
        }
        p++;
    }
    while (p1 <= mid)
    {
        temp[p][0] = intervals[p1][0];
        temp[p][1] = intervals[p1][1];
        temp[p][2] = intervals[p1][2];
        p1++;
        p++;
    }
    while (p2 <= high)
    {
        temp[p][0] = intervals[p2][0];
        temp[p][1] = intervals[p2][1];
        temp[p][2] = intervals[p2][2];
        p2++;
        p++;
    }
    p = 0;
    p1 = low;
    while (p1 <= high)
    {
        intervals[p1][0] = temp[p][0];
        intervals[p1][1] = temp[p][1];
        intervals[p1][2] = temp[p][2];
        p1++;
        p++;
    }
}

void sort_intervals(int low, int high)
{
    if (low == high)
        return;
    int mid = (low + high) / 2;
    sort_intervals(low, mid);
    sort_intervals(mid + 1, high);
    merge_intervals(low, high);
}

int max(int x, int y)
{
    if (x > y)
        return x;
    return y;
}

float min(float x, float y)
{
    if (x < y)
        return x;
    return y;
}

void print_intervals(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%f %f\n", intervals[i][0], intervals[i][1]);
    }
}

int main()
{
    int n;
    time_t t;
    srand((unsigned)time(&t));
    printf("Enter the number of intervals:\n");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        float start = (rand() % 10) / 11.23;
        float end = (rand() % 10) / 11.23;
        if (start > end)
        {
            intervals[i][0] = end;
            intervals[i][1] = start;
        }
        else
        {
            intervals[i][0] = start;
            intervals[i][1] = end;
        }
        intervals[i][2] = i;
    }

    sort_intervals(0, n - 1);
    print_intervals(n);

    float overlapping_intervals[n][3];
    float start_interval = intervals[0][0], end_interval = intervals[0][1];
    int k = 0, count = 1, max_overlap = 0;
    printf("%d\n", n);
    for (int i = 1; i < n; i++)
    {
        printf("%f %f\n", start_interval, end_interval);
        if (intervals[i][0] < end_interval)
        {
            start_interval = intervals[i][0];
            end_interval = min(end_interval, intervals[i][1]);
            count++;
        }
        else
        {
            max_overlap = max(max_overlap, count);
            overlapping_intervals[k][0] = start_interval;
            overlapping_intervals[k][1] = end_interval;
            overlapping_intervals[k][2] = i - 1;
            start_interval = intervals[i][0];
            end_interval = intervals[i][1];
            count = 1;
            k++;
        }
    }
    max_overlap = max(max_overlap, count);
    overlapping_intervals[k][0] = start_interval;
    overlapping_intervals[k][1] = end_interval;
    overlapping_intervals[k][2] = n - 1;
    printf("The maximum overlapping Interval: %d\n", max_overlap);

    if (overlapping_intervals[0][2] + 1 == max_overlap)
    {
        for (int i = 0; i < max_overlap; i++)
            printf("%f:- %f %f\n", overlapping_intervals[i][2], overlapping_intervals[i][0], overlapping_intervals[i][1]);
    }
    else
    {
        for (int i = 1; i <= k; i++)
        {
            if (overlapping_intervals[i][2] - overlapping_intervals[i - 1][2] == max_overlap)
            {
                for (int j = overlapping_intervals[i - 1][2] + 1; j <= overlapping_intervals[i][2]; j++)
                    printf("%d:- %f %f\n", (int)intervals[j][2], intervals[j][0], intervals[j][1]);
                break;
            }
        }
    }
    return 0;
}
