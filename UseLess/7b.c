#include <stdio.h>
#include <stdlib.h>

// Function to schedule orders using the greedy approach (Part a)
void schedule_orders_a(int *processing_times, int num_orders, int num_counters, int **schedule, int *closing_time) {
    int counter_times[num_counters];
    for (int j = 0; j < num_counters; j++) {
        counter_times[j] = 0;
    }

    for (int i = 0; i < num_orders; i++) {
        int earliest_counter = 0;
        for (int j = 1; j < num_counters; j++) {
            if (counter_times[j] < counter_times[earliest_counter]) {
                earliest_counter = j;
            }
        }
        schedule[earliest_counter][i] = 1;
        counter_times[earliest_counter] += processing_times[i];
    }

    *closing_time = 0;
    for (int j = 0; j < num_counters; j++) {
        if (counter_times[j] > *closing_time) {
            *closing_time = counter_times[j];
        }
    }
}

// Function to schedule orders by sorting processing times (Part b)
void schedule_orders_b(int *processing_times, int num_orders, int num_counters, int **schedule, int *closing_time) {
    int sorted_processing_times[num_orders];
    for (int i = 0; i < num_orders; i++) {
        sorted_processing_times[i] = processing_times[i];
    }
    for (int i = 0; i < num_orders - 1; i++) {
        for (int j = 0; j < num_orders - i - 1; j++) {
            if (sorted_processing_times[j] < sorted_processing_times[j + 1]) {
                int temp = sorted_processing_times[j];
                sorted_processing_times[j] = sorted_processing_times[j + 1];
                sorted_processing_times[j + 1] = temp;
            }
        }
    }
    schedule_orders_a(sorted_processing_times, num_orders, num_counters, schedule, closing_time);
}

// Function to calculate the total waiting time (Part c)
int wait_time(int **schedule, int *processing_times, int num_orders, int num_counters) {
    int waiting_times[num_orders];
    for (int i = 0; i < num_orders; i++) {
        waiting_times[i] = 0;
    }

    for (int j = 0; j < num_counters; j++) {
        int counter_time = 0;
        for (int i = 0; i < num_orders; i++) {
            if (schedule[j][i] == 1) {
                waiting_times[i] = counter_time;
                counter_time += processing_times[i];
            }
        }
    }

    int total_waiting_time = 0;
    for (int i = 0; i < num_orders; i++) {
        total_waiting_time += waiting_times[i];
    }
    return total_waiting_time;
}

int main() {
    int n;
    printf("Enter the number of customers: ");
    scanf("%d", &n);

    int *processing_times = (int *)malloc(n * sizeof(int));
    printf("Enter the processing times: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &processing_times[i]);
    }

    int num_counters;
    printf("Enter the number of counters: ");
    scanf("%d", &num_counters);

    // Part a
    int **schedule_a = (int **)malloc(num_counters * sizeof(int *));
    for (int i = 0; i < num_counters; i++) {
        schedule_a[i] = (int *)calloc(n, sizeof(int));
    }
    int closing_time_a;
    schedule_orders_a(processing_times, n, num_counters, schedule_a, &closing_time_a);
    printf("Schedule from Part a:\n");
    print_schedule(schedule_a, n, num_counters);
    printf("Closing time: %d\n", closing_time_a);
    printf("Total waiting time: %d\n", wait_time(schedule_a, processing_times, n, num_counters));

    // Part b
    int **schedule_b = (int **)malloc(num_counters * sizeof(int *));
    for (int i = 0; i < num_counters; i++) {
        schedule_b[i] = (int *)calloc(n, sizeof(int));
    }
    int closing_time_b;
    schedule_orders_b(processing_times, n, num_counters, schedule_b, &closing_time_b);
    printf("\nSchedule from Part b:\n");
    print_schedule(schedule_b, n, num_counters);
    printf("Closing time: %d\n", closing_time_b);
    printf("Total waiting time: %d\n", wait_time(schedule_b, processing_times, n, num_counters));

    // Part c
    int **schedule_c = (int **)malloc(num_counters * sizeof(int *));
    for (int i = 0; i < num_counters; i++) {
        schedule_c[i] = (int *)calloc(n, sizeof(int));
    }
    int closing_time_c;
    schedule_orders_b(processing_times, n, num_counters, schedule_c, &closing_time_c);
    printf("\nSchedule from Part c:\n");
    print_schedule(schedule_c, n, num_counters);
    printf("Closing time: %d\n", closing_time_c);
    printf("Total waiting time: %d\n", wait_time(schedule_c, processing_times, n, num_counters));

    // Free memory
    for (int i = 0; i < num_counters; i++) {
        free(schedule_a[i]);
        free(schedule_b[i]);
        free(schedule_c[i]);
    }
    free(schedule_a);
    free(schedule_b);
    free(schedule_c);
    free(processing_times);

    return 0;
}

// Helper function to print the schedule
void print_schedule(int **schedule, int num_orders, int num_counters) {
    for (int j = 0; j < num_counters; j++) {
        printf("Counter %d: Orders ", j + 1);
        for (int i = 0; i < num_orders; i++) {
            if (schedule[j][i] == 1) {
                printf("%d ", i + 1);
            }
        }
        printf("\n");
    }
}