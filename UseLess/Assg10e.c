#include <stdio.h>
#include <stdlib.h>

// Helper function to calculate the maximum profit for a given range of days
int maxProfitInRange(int B[], int S[], int start, int end, int C) {
    int minBuyIndex = start;
    int maxSellIndex = end;
    int maxProfit = 0;

    // Find the day to buy with the minimum buying rate
    for (int i = start; i <= end; i++) {
        if (B[i] < B[minBuyIndex]) {
            minBuyIndex = i;
        }
    }

    // Find the day to sell with the maximum selling rate after buying
    for (int i = minBuyIndex + 1; i <= end; i++) {
        if (S[i] > S[maxSellIndex]) {
            maxSellIndex = i;
        }
    }

    int maxBuyableItems = C / B[minBuyIndex];
    maxProfit = maxBuyableItems * (S[maxSellIndex] - B[minBuyIndex]);

    return maxProfit;
}

// Divide and conquer approach with O(n log n) time complexity
int singletrans1(int B[], int S[], int n, int C) {
    if (n < 2) {
        // Base case: Not enough data to make a transaction
        return 0;
    }

    int mid = n / 2;
    int leftProfit = singletrans1(B, S, mid, C);
    int rightProfit = singletrans1(B + mid, S + mid, n - mid, C);

    // Calculate the profit for combining left and right halves
    int combinedProfit = maxProfitInRange(B, S, 0, mid - 1, C) +
                         maxProfitInRange(B, S, mid, n - 1, C);

    // Return the maximum profit among left, right, and combined profits
    return (leftProfit > rightProfit && leftProfit > combinedProfit)
               ? leftProfit
               : (rightProfit > combinedProfit) ? rightProfit : combinedProfit;
}

// Efficient O(n) implementation
int singletrans2(int B[], int S[], int n, int C) {
    int maxProfit = 0;
    int minBuyIndex = 0;

    for (int i = 0; i < n; i++) {
        if (B[i] < B[minBuyIndex]) {
            minBuyIndex = i;
        } else {
            int maxBuyableItems = C / B[minBuyIndex];
            int currentProfit = maxBuyableItems * (S[i] - B[minBuyIndex]);
            if (currentProfit > maxProfit) {
                maxProfit = currentProfit;
            }
        }
    }

    return maxProfit;
}

int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int n;
    scanf("%d",&n);
    int B[100];
    int S[100];

    for(int i=0;i<n;i++){
        scanf("%d",&B[i]);
    }

    for(int i=0;i<n;i++){
        scanf("%d",&S[i]);
    }

    int C;  //capital or total money
    scanf("%d",&C);

    int result1 = singletrans1(B, S, n, C);
    int result2 = singletrans2(B, S, n, C);

    printf("Maximum profit (Divide and Conquer): %d\n", result1);
    printf("Maximum profit (Efficient): %d\n", result2);

    return 0;
}
