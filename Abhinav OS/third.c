#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <signal.h>
#include <time.h>

#define N 10000
#define RANGE 1000

int array[N];
int target_found = 0; 

void child_handler(int signum) 
{
    exit(0);
}

void parent_handler(int signum) 
{
    kill(0, SIGUSR1);
    exit(0);
}

int main() 
{
    srand(time(NULL));

    for (int i = 0; i < N; i++) {
        array[i] = rand() % RANGE + 1;
    }

    int x;
    printf("Enter the integer to search (1-1000): ");
    scanf("%d", &x);

    int n;
    printf("Enter the number of child processes: ");
    scanf("%d", &n);

    int r;
    pid_t child_pid[n];

    clock_t start_time, end_time;

    start_time = clock();

    for (r = 0; r < n; r++) {
        child_pid[r] = fork();
        if (child_pid[r] == 0) {
            break;
        }
    }

    if (r == n) {
        
        for (int i = 0; i < n; i++) {
            signal(SIGUSR1, child_handler);
        }
        signal(SIGUSR1, parent_handler);

        int chunk_size = N / n;

        for (int i = 0; i < n; i++) 
        {
            if (child_pid[i] > 0) 
            {
                for (int j = i * chunk_size; j < (i + 1) * chunk_size; j++) 
                {
                    if (array[j] == x) 
                    {
                        printf("Child %d found the target at index %d.\n", i + 1, j);
                        target_found = 1;
                        kill(0, SIGUSR1); // Send signal to parent to terminate all processes
                        break;
                    }
                }
            } else if (child_pid[i] == 0) {
                while (!target_found) {
                    // Waiting for signal
                }
                exit(0);
            }
        }

        for (int i = 0; i < n; i++) {
            wait(NULL);
        }

        end_time = clock();
        double execution_time = ((double) (end_time - start_time)) / CLOCKS_PER_SEC;
        printf("Parent process exiting. Total execution time: %lf seconds.\n", execution_time);
    } else if (r < n) {
        
        
        while (!target_found) {
            // Waiting for signal
        }
        exit(0);
    }

    return 0;
}

