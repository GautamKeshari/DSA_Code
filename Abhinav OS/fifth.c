#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/wait.h>

int isPrime(int n)
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
	int x,y;
	printf("Enter the value of x and y\n");
	scanf("%d %d",&x,&y);
	int m = 2;
	int n = y - x;
	
	int r_per = n/m;
	int extra = n % m;
	
	FILE *prime_file = fopen("prime.txt", "w");
	
	for(int i=0;i<m;i++)
	{
		pid_t p = fork();
		if(p == 0)
		{
			int s = i*r_per + x;
			int end = x + (i+1)*r_per;
			if(i == m-1) end += extra;
			for(int i=s;i<=end;i++)
			{
				if(isPrime(i))
				{
					printf("%d ", i);
					fprintf(prime_file, "%d\n", i);
				}
			}
			exit(0);
		}
	}
	
	fclose(prime_file);
	for(int i=0;i<m;i++)
	{
		wait(NULL);
	}
	printf("\n");
	
	return 0;
}




