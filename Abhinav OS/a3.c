#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
int main()
{
    FILE *f;
    f = fopen("log1.txt", "a");
    int i, n;
    scanf("%d", &n);
    printf("Parent pid %d\n", getpid());
    fprintf(f, "Parent of all %d \n", getpid());
    fflush(f);
    for (i = 0; i < n; i++)
    {
        if (fork() == 0)
        {
            printf("child %d parent %d\n", getpid(), getppid());
            fprintf(f, "Parent id : %d Child id %d\n", getppid(), getpid());
            fflush(f);
        }
        else
            break;
    }
    return 0;
}