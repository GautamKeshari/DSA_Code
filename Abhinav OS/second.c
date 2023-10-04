#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <signal.h>
#include<time.h>

#define ARRAY_SIZE 10000



int searchInArray(int* arr, int start, int end, int target, int child_num) {
    for (int i = start; i < end; ++i) {
        if (arr[i] == target) {
            printf("Target Found at index %d \n",i);  
            return 1;
        }
    }
    return 0;
}

int main() {
    
    int* arr = (int*)malloc(ARRAY_SIZE * sizeof(int));
    srand(time(NULL));
    for (int i = 0; i < ARRAY_SIZE; ++i) {
       arr[i] = 1 + rand() % 1000;
    }
    
    arr[2000] = 100;
    arr[1000] = 100;
    arr[7000] = 100;

    
    int SEARCH_TARGET;
    printf("Enter the search value : ");
    scanf("%d",&SEARCH_TARGET);
     
    pid_t child1_pid, child2_pid;

    child1_pid = fork();
    if (child1_pid == 0){
        int found_1 = searchInArray(arr, 0, ARRAY_SIZE / 2, SEARCH_TARGET, 1);
       	if(found_1) kill(getpid()+1,SIGKILL);
       	else printf("Target not found from child 1\n");
       	exit(0);
    }else{
        child2_pid = fork();
        if (child2_pid == 0){
            int found_2 = searchInArray(arr, ARRAY_SIZE / 2, ARRAY_SIZE, SEARCH_TARGET, 2);
            if(found_2) kill(getpid()-1,SIGKILL);
            else printf("Target not found from child 2\n");
            exit(0);
        }
    }
    		
    int status1, status2;
    waitpid(child1_pid, &status1, 0);
    waitpid(child2_pid, &status2, 0);
    

    free(arr);

    return 0;
}
