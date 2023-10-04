// Wait for Any Child Termination:

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

int main() {
    pid_t child_pid;
    int status;

    // Create a child process
    if ((child_pid = fork()) == 0) {
        // This is the child process
        printf("Child process is executing...\n");
        exit(42); // Terminate the child with exit status 42
    } else if (child_pid > 0) {
        // This is the parent process
        printf("Parent process is waiting for any child to terminate...\n");
        pid_t terminated_pid = wait(&status); // Wait for any child to terminate
        printf("Child with PID %d has terminated with exit status %d.\n", terminated_pid, WEXITSTATUS(status));
    } else {
        // Fork failed
        perror("Fork failed");
        return 1;
    }

    return 0;
}
