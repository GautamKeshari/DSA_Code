#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
#include<math.h>

void print_prime(int start,int end)
{
    int i,j,flag;
     for (i = start; i <= end; i++) {
        // Skip 0 and 1 as they are
        // neither prime nor composite
        if (i == 1 || i == 0)
            continue;
 
        // flag variable to tell
        // if i is prime or not
        flag = 1;
 
        for (j = 2; j <= i / 2; ++j) {
            if (i % j == 0) {
                flag = 0;
                break;
            }
        }
 
        // flag = 1 means i is prime
        // and flag = 0 means i is not prime
        if (flag == 1)
            printf("%d ", i);
    }
}


int main()
{


    int N,M,i;
    printf("Enter the upper limit: \n");
    scanf("%d",&N);
    printf("Enter the value of M: \n");
    scanf("%d",&M);
    for(i=0;i<M;i++)
    {
        if(fork()==0)    
        {
            print_prime(1+i*(N/M),(i+1)*(N/M));
            if(i==M-1)
            print_prime((i+1)*(N/M),N);
            break;
        }
    }




}