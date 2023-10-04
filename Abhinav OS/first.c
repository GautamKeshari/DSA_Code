#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include<sys/wait.h>

void log_process_info(pid_t pid, pid_t ppid) {
    FILE *log_file = fopen("log.txt", "a");
    if (log_file != NULL) {
        fprintf(log_file, "PID: %d, PPID: %d\n", pid, ppid);
        fclose(log_file);
    }
}

void create_child_chain(int n) {
    pid_t previous_pid = getpid();
    
    int i;
    for (i = 0; i < n; i++){
        pid_t pid = fork();

        if (pid < 0) {
            perror("fork");
            return;
        } else if (pid == 0){
            printf("Child process (PID: %d) created from parent (PID: %d)\n", getpid(), getppid());
            log_process_info(getpid(),getppid());
        } else {
            int status;
            wait(&status); // Wait for the child to finish
            break;
        }
    }

}

int main() {
    int n;
    printf("Enter the number of child processes (n): ");
    scanf("%d", &n);
    printf("Child process (PID: %d) created from parent (PID: %d)\n", getpid(), getppid());
    log_process_info(getpid(), getppid());
    create_child_chain(n);
    
    return 0;
}
