#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>


int is_prime(int n) 
{
    	if(n == 0 || n == 1) return 0;
	for(int i=2;i<n;i++)
	{
		if(n % i == 0) return 0;
	}
	return 1;
}

int main() 
{
    int p, x, y;
    printf("Enter the value of p, x, and y: ");
    scanf("%d %d %d", &p, &x, &y);

    int pipe1[2], pipe2[2];
    if (pipe(pipe1) == -1 || pipe(pipe2) == -1) {
        perror("Pipe creation failed");
        exit(EXIT_FAILURE);
    }

    for (int i = 0; i < 2; i++) {
        pid_t pid = fork();

        if (pid < 0) {
            perror("Fork failed");
            exit(EXIT_FAILURE);
        } else if (pid == 0)
        {
            close(pipe1[0]); 
            close(pipe2[0]); 

            
            int start = (i == 0) ? x : x + (y - x + 1) / 2;
            int end = (i == 0) ? x + (y - x + 1) / 2 - 1 : y;

            for (int num = start; num <= end && p > 0; num++) {
                if (is_prime(num)) {
                    write((i == 0) ? pipe1[1] : pipe2[1], &num, sizeof(num));
                    p--;
                }
            }

            close(pipe1[1]);
            close(pipe2[1]); 
            exit(EXIT_SUCCESS);
        }
    }

    
    close(pipe1[1]);
    close(pipe2[1]);

    int prime_count = 0;
    int prime;

    FILE *prime_file = fopen("prime2.txt", "w");
    if (prime_file == NULL) {
        perror("File opening failed");
        exit(EXIT_FAILURE);
    }

    while (prime_count < p) {
        if (read(pipe1[0], &prime, sizeof(prime)) > 0) {
            fprintf(prime_file, "%d\n", prime);
            prime_count++;
        }

        if (read(pipe2[0], &prime, sizeof(prime)) > 0) {
            fprintf(prime_file, "%d\n", prime);
            prime_count++;
        }
    }

    fclose(prime_file);
    close(pipe1[0]); 
    close(pipe2[0]); 

    
    wait(NULL);
    wait(NULL);

    return 0;
}

