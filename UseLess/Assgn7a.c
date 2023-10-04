#include<stdio.h>
#include<stdlib.h>

int main(){

    int n;      //total customer
    scanf("%d",n);
    int t[100];   //ti is the time to process and serve the ith customer's order
    for(int i=0;i<n;i++){
        int x;
        scanf("%d",&x);
        t[i]=x;
    }
    int k; //total no. of counter
    scanf("%d",&k);

    int sche[100][100];

    

    for(int counter=0;counter<k;counter++){
        for(int time=0;time<k;time++){
            int x;
            scanf("%d",&x);
            sche[counter][time]=x;
        }
    }

}