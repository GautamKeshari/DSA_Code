#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool checkSum(int *arr,int n){
    int countSum=0;
    for(int i=0;i<n;i++){
        if(countSum>n){
            return false;
        }
        countSum+=arr[i];
    }
    
    if(countSum==n){
        return true;
    }
    return false;
}

void initializing(int* arr,int n){
    for(int i=0;i<n;i++){
        arr[i]=0;
    }
}

void print(int *arr,int n){
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
}

void printchar(int *arr,int n,char *charArray){
    for(int i=0;i<n;i++){
        if(arr[i]<10){
            printf("%d",arr[i]);
        }else{
            printf("%c",charArray[arr[i]-10]);
        }
    }
    printf("\n");
}

bool checkSatisfy(int *arr,int n){
    int count[n];
    initializing(count,n);
    for(int i=0;i<n;i++){
        count[arr[i]]++;
    }
    for(int i=0;i<n;i++){
        if(count[i]!=arr[i]){
            return false;
        }
    }
    return true;
}

void create(int *arr,int n,int ind,int *ptr,int *flag){
    char charArray[6]={'A','B','C','D','E','F'};
    if(ind==n){
        if(arr[0]>0 && arr[n-1]==0 && checkSum(arr,n) && checkSatisfy(arr,n)){
            printf("The special number with size %d:",n);
            if(n>10){
                printchar(arr,n,charArray);
            }else{
                print(arr,n);
            }
            if(n>6){
                (*flag)=1;
            }
        }
        return;
    }
    if(n<6){
        for(int i=0;i<n;i++){
            arr[ind]=i;
            if(arr[0]==0 && arr[n-1]!=0) continue;
            create(arr,n,ind+1,ptr,flag);
        }
    }else{
        arr[0]=n-4;
        for(int i=0;i<3;i++){
            arr[ind]=i;
    
            if(arr[0]==0 && arr[n-1]!=0) continue;
            create(arr,n,ind+1,ptr,flag);
            if((*flag)==1) return;
        }
    }
}

int main(){
    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);

    int counter=1,counter1=0;
    int* ptr=&counter;
    int* flag=&counter1;
    for(int i=4;i<=n;i++){
        (*flag)=0;
        int *arr=(int *)malloc(i*sizeof(int));
        create(arr,i,0,ptr,flag);
    }
    printf("exit\n");
    return 0;
}
