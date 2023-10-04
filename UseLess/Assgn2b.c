#include <stdio.h>
#define int long long int

// for iterative and formulise approach
int power_3[20];
int factorial[20];
int calculateS(int n) {
    int ans = power_3[n];
    for (int j = 1; j <= n / 3; j++) {
        int p = (factorial[n - 2 * j] / (factorial[n - 3 * j] * factorial[j])) * power_3[n - 2 * j];
        if (j % 2 == 1) {
            ans -= p;
        } else {
            ans += p;
        }
    }
    return ans;
}

int isFeasible(int n) {
    int factorial[20];
    power_3[0] = factorial[0] = 1;
    for (int i = 1; i <= 19; i++) {
        factorial[i] = factorial[i - 1] * i;
    }
    int sum = 0;
    for (int j = 0; j <= n - 3; j++) {
        sum += (calculateS(j) * calculateS(n - 3 - j));
    }
    return sum;
}

// Recursive Approach

char str[20];
void countOccurrences(int i, int n, int *count) {
    if (i == n) {
        int c = 0;
        for (int k = 0; k < n - 2; k++) {
            if (str[k] == 'x' && str[k + 1] == 'y' && str[k + 2] == 'z') {
                c++;
            }
        }
        if (c == 1) {
            (*count)++;
        }
        return;
    }

    for (char ch = 'x'; ch <= 'z'; ch++) {
        str[i] = ch;
        countOccurrences(i + 1, n, count);
    }
}

signed main() {
    int n;
    scanf("%lld", &n);
    int ans = isFeasible(n);
    printf("%lld", ans);

    // For recursive code
    int x;
    scanf("%d", &x);
    int count = 0;
    countOccurrences(0, x, &count);
    printf("%d", count);
    return 0;
}