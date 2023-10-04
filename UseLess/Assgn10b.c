#include <stdio.h>
#include <stdlib.h>

int max(int a, int b) {
    return (a > b) ? a : b;
}

int multitrans(int B[], int S[], int n, int C) {
     int* profit = (int*)malloc(n * sizeof(int));
     profit[0] = 0;

    for (int i = 1; i < n; i++) {
        profit[i] = 0;
        for (int j = 0; j < i; j++) {
              int maxProfit = profit[j] +  (C/B[i]) *(S[i] - B[j]);
            if (maxProfit > profit[i]) {
                profit[i] = maxProfit;
              
            C= maxProfit;
            printf("Max PROFIT %d", maxProfit);
            }
        }
    }
    return 0;
}
int main(){

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif


    int n;
     printf("Enter the number of transactions\t");
     scanf("%d", &n);
     int B[100], S[100];
     printf("Enter the transactions of buying array\t");
     for(int i=0;i<n;i++){
        scanf("%d", &B[i]);
     }
     printf("Enter the transactions of selling array\t");
     for(int i=0;i<n;i++){
        scanf("%d", &S[i]);
     }
   
    int C = 1000;
    multitrans( B, S,n, C);
    return 0;
}