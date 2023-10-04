// Online C compiler to run C program online
#include <stdio.h>
#include <sys/types.h>
#include<stdlib.h>

int main() {
    int i=5;
    pid_t x;
     x=fork() || fork();
     
     if(x>0){  //only parent
         i+=5;
        //  sleep(1);
         printf("\n  Parent Process %d ; x=%d \n",getpid(),i);
     }else{
         i+=1;
         printf("\n  Child Process %d its parent %d ; x=%d \n",getpid(),getppid(),i);
     }
    //  printf("\n Hello %d \n",getpid());
    return 0;
}

// Parent Process 24816 ; x=10 
// Parent Process 24817 ; x=10 

//   Child Process 24818 its parent 24817 ; x=6 