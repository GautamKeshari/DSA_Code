#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <signal.h>
#include<time.h>


int isPrime(int n)
{	
	if(n == 0 || n == 1) return 0;
	for(int i=2;i<n;i++)
	{
		if(n % i == 0) return 0;
	}
	return 1;
}


void child_handler(int signum) {
    exit(0);
}

int main() 
{ 
    int x,y;
    printf("Enter the value of x and y \n: ");
    scanf("%d %d", &x,&y);
    int n = y-x;
    int m = 2;

    int range = n / m;
    pid_t child_pid[2];

    for (int r = 0; r < m; r++) {
        child_pid[r] = fork();
        if (child_pid[r] == 0) {
            break;
        }
    }

    signal(SIGUSR1, child_handler);
    for(int i=0;i<m;i++)
    {
    	int s = x + i*range;
    	int e = x + (i+1)*range;
    	if(child_pid[i] == 0)
    	{
    		for (int j = s; j < e; j++) 
    		{
                	if (isPrime(j) == 1) 
                	{
                    		printf("%d child found the first prime number %d.\n",i+1, j);
                    		if(i==0) kill(child_pid[1],SIGUSR1);
                    		else kill(child_pid[0],SIGUSR1);
                    		break;
                	}
            	}	
            	exit(0);
        }
    }
    
    for(int i=0;i<m;i++)
    {
    	wait(NULL);
    }

    
    return 0;
}




