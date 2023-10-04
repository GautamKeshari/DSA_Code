#include <stdio.h>
#include <stdlib.h>

// Helper function to calculate the maximum profit for a single transaction (O(n log n))
void singletrans1(int B[], int S[], int n, int C) {
    int minBuyIndex = 0;
    int maxSellIndex = 0;

    for (int i = 0; i < n; i++) {
        if (B[i] < B[minBuyIndex]) {
            minBuyIndex = i;
        }
        if (S[i] > S[maxSellIndex]) {
            maxSellIndex = i;
        }
    }

    int maxBuyableItems = C / B[minBuyIndex];
    int maxProfit = maxBuyableItems * (S[maxSellIndex] - B[minBuyIndex]);

    printf("+++ Single transaction: O(n log n) time\n");
    printf("Buying date = %d, Buying rate = %d\n", minBuyIndex, B[minBuyIndex]);
    printf("Selling date = %d, Selling rate = %d\n", maxSellIndex, S[maxSellIndex]);
    printf("Maximum profit = %d\n", maxProfit);
}

// Helper function to calculate the maximum profit for a single transaction (O(n))
void singletrans2(int B[], int S[], int n, int C) {
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

    printf("+++ Single transaction: O(n) time\n");
    printf("Buying date = %d, Buying rate = %d\n", minBuyIndex, B[minBuyIndex]);
    printf("Selling date = %d, Selling rate = %d\n", minBuyIndex, S[minBuyIndex]);
    printf("Maximum profit = %d\n", maxProfit);
}

// Function to maximize profit with multiple transactions (O(n^2))
void multitrans(int B[], int S[], int n, int C) {
    int* dp = (int*)malloc((n + 1) * sizeof(int));
    int* buyIndex = (int*)malloc((n + 1) * sizeof(int));
    int* sellIndex = (int*)malloc((n + 1) * sizeof(int));

    // Initialize dp array with 0
    for (int i = 0; i <= n; i++) {
        dp[i] = 0;
        buyIndex[i] = -1;
        sellIndex[i] = -1;
    }

    for (int i = 1; i < n; i++) {
        for (int j = 0; j < i; j++) {
            int maxProfit = dp[j] + (C / B[j]) * (S[i] - B[j]);
            if (maxProfit > dp[i]) {
                dp[i] = maxProfit;
                buyIndex[i] = j;
                sellIndex[i] = i;
            }
        }
    }

    int maxFinalProfit = dp[n - 1];

    printf("+++ Multiple transactions\n");
    printf("Initial capital = %d\n", C);

    int currentCapital = C;
    int transactionCount = 0;

    for (int i = n - 1; i >= 0; i--) {
        if (buyIndex[i] != -1) {
            int buyDate = buyIndex[i];
            int sellDate = sellIndex[i];
            int maxBuyableItems = currentCapital / B[buyDate];
            int profit = maxBuyableItems * (S[sellDate] - B[buyDate]);

            printf("Buying date = %d, Buying rate = %d\n", buyDate, B[buyDate]);
            printf("Selling date = %d, Selling rate = %d\n", sellDate, S[sellDate]);
            printf("Current capital = %d\n", currentCapital);

            currentCapital += profit;
            transactionCount++;
        }
    }

    printf("Maximum profit = %d\n", maxFinalProfit);
    
    free(dp);
    free(buyIndex);
    free(sellIndex);
}

int main() {

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int B[n], S[n];
    printf("Enter buying prices: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &B[i]);
    }

    printf("Enter selling prices: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &S[i]);
    }

    int C;
    printf("Enter initial capital (C): ");
    scanf("%d", &C);

    singletrans1(B, S, n, C);
    singletrans2(B, S, n, C);
    multitrans(B, S, n, C);

    return 0;
}
