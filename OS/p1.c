// Online C compiler to run C program online
#include <stdio.h>
#include <sys/types.h>
#include<stdlib.h>

int main() {
    int i=5;
    pid_t x;
     x=fork();
     
     if(x>0){  //only parent
         i+=5;
         sleep(1);
         printf("\n  Parent Process %d ; x=%d ",getpid(),i);
     }else{
         i+=1;
         printf("\n  Child Process %d its parent %d ; x=%d ",getpid(),getppid(),i);
     }
     printf("\n Hello %d \n",getpid());
    return 0;
}


// Child Process 16276 its parent 16275 ; x=6 
//  Hello 16276 
// Parent Process 16275 ; x=10 
//  Hello 16275