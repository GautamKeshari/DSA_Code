#include <stdio.h>

int p[1001];
struct Node
{
    int val;
    int n;
};
typedef struct Node node;

node a[1001][10001];


void merge(int arr[], int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    int L[n1], R[n2];

    for (int i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];

    int i = 0, j = 0, k = left;

    while (i < n1 && j < n2) {
        if (L[i] >= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;

        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);

        merge(arr, left, mid, right);
    }
}
int main()
{
    int n, k;
    scanf("%d %d", &n, &k);

    for (int i = 0; i < n; i++)
        scanf("%d", &p[i]);

    node t[k];
    int mini = 100000001, indx = -1, indy;

    for (int i = 0; i < k; i++)
    {
        a[i][0].val = p[i];
        a[i][0].n = i + 1;
        t[i].val = p[i];
        t[i].n = 1;

        if (mini > t[i].val)
        {
            indx = i;
            mini = t[i].val;
        }
    }

    for (int i = k; i < n; i++)
    {
        a[indx][t[indx].n].val = p[i];
        a[indx][t[indx].n].n = i + 1;
        t[indx].val += p[i];
        t[indx].n += 1;

        mini = 100000001, indx = -1;

        for (int j = 0; j < k; j++)
        {
            if (mini > t[j].val)
            {
                indx = j;
                mini = t[j].val;
            }
        }
    }

    int sum = 0, wt = 0;

    for (int i = 0; i < k; i++)
    {
        int ti = 0;
        printf("counter %d:", i + 1);

        for (int j = 0; j < t[i].n; j++)
        {
            printf("%d(%d) ", a[i][j].n, a[i][j].val);
            wt += ti;
            ti += a[i][j].val;
        }

        if (ti > sum)
            sum = ti;

        printf("\n");
    }

    printf("Cafe closes at time: %d\n", sum);
    printf("Total waiting time: %d\n", wt);
   
  
    return 0;
}