#include <stdio.h>
#include <stdlib.h>

// Function to sort an array in non-increasing order using quicksort
void quicksort(int arr[], int left, int right) {
    if (left < right) {
        int pivot = arr[right];
        int i = left - 1;

        for (int j = left; j <= right - 1; j++) {
            if (arr[j] >= pivot) {
                i++;
                // Swap arr[i] and arr[j]
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }

        // Swap arr[i+1] and arr[right] (pivot)
        int temp = arr[i + 1];
        arr[i + 1] = arr[right];
        arr[right] = temp;

        int pi = i + 1;

        // Recursively sort elements before and after partition
        quicksort(arr, left, pi - 1);
        quicksort(arr, pi + 1, right);
    }
}

// Function to schedule orders using the greedy approach (Part a)
int schedule_orders_a(int t[], int n, int k, int schedule[][100]) {
    int counter_time[100] = {0}; // Initialize counter finish times
    int total_time = 0;

    for (int i = 0; i < n; i++) {
        int min_time = counter_time[0];
        int counter_idx = 0;

        // Find the counter with the earliest finish time
        for (int j = 1; j < k; j++) {
            if (counter_time[j] < min_time) {
                min_time = counter_time[j];
                counter_idx = j;
            }
        }

        // Assign the order to the counter and update finish time
        schedule[counter_idx][i] = t[i];
        counter_time[counter_idx] += t[i];

        if (counter_time[counter_idx] > total_time) {
            total_time = counter_time[counter_idx];
        }
    }

    return total_time;
}

// Function to calculate the total waiting time (Part c)
int wait_time(int schedule[][100], int t[], int n, int k) {
    int total_waiting_time = 0;

    for (int i = 0; i < n; i++) {
        int counter_idx = 0;
        for (int j = 1; j < k; j++) {
            if (schedule[j][i] < schedule[counter_idx][i]) {
                counter_idx = j;
            }
        }

        int waiting_time = 0;
        for (int j = 0; j < i; j++) {
            waiting_time += schedule[counter_idx][j];
        }

        total_waiting_time += waiting_time;
    }

    return total_waiting_time;
}

// Main function
int main() {
    int n, k;
    printf("Enter the number of customers: ");
    scanf("%d", &n);

    int t[100]; // Order processing times
    printf("Enter the order processing times for each customer:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &t[i]);
    }

    printf("Enter the number of counters: ");
    scanf("%d", &k);

    // Sort order processing times in non-increasing order (Part b)
    // quicksort(t, 0, n - 1);

    int schedule[100][100] = {0};
    int total_time_a = schedule_orders_a(t, n, k, schedule);
    int total_waiting_time_c = wait_time(schedule, t, n, k);

    printf("Closing time using greedy approach (Part a): %d\n", total_time_a);
    printf("Total waiting time using schedule of Part b (Part c): %d\n", total_waiting_time_c);

    return 0;
}
