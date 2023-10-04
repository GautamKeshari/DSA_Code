#include <stdio.h>

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

int main() {
    int n;
    scanf("%d", &n);
    int count = 0;
    countOccurrences(0, n, &count);
    printf("%d", count);
    return 0;
}