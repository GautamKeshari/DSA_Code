#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
int main()
{
    FILE *f;
    int i, n;
    scanf("%d", &n);
    f=fopen("log.txt","a");
    printf("Parent pid %d\n", getpid());
    fprintf(f,"Parent of all %d\n",getpid());
    fflush(f);
    for (i = 0; i < n; i++)
    {
        if(fork()==0)
        {
            printf("parent id %d child id %d\n",getppid(),getpid());
            fprintf(f,"Parent %d child %d\n",getppid(),getpid());
            fflush(f);
            break;
        }
    }
    return 0;
}