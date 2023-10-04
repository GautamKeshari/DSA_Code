#include<stdio.h>
#include<stdlib.h>
 int arr[100][2];
 int arr2[100][2];

int main(int argc, char const *argv[])
{
    int n;
    scanf("%d",&n);
   
    for(int i=0;i<n;i++){
       arr[i][0]=rand()%50;
       arr[i][1]=rand()%50;
    }
    printf("points are as follows:\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i][0]);
        printf("%d\n",arr[i][1]);
    }
    int count=0;
    int ans[n];
    for(int i=0;i<n;i++){
        count=0;
        for(int j=0;j<n;j++){
            if((arr[i][0]>arr[j][0]) && (arr[i][1]>arr[j][1])){
                count++;
            }
        }
    ans[i]=count;
    }
    printf("superiority of each point is :\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i][0]);
        printf("%d ",arr[i][1]);
        printf("%d\n",ans[i]);
    }
    return 0;
}

