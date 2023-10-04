#include <stdio.h>
#include <stdlib.h>

int **allocateTable(int n, int S) {
    int **P = (int **)malloc((n + 1) * sizeof(int *));
    for (int i = 0; i <= n; i++) {
        P[i] = (int *)malloc((2 * S + 1) * sizeof(int));
        for (int j = 0; j <= 2 * S; j++) {
            P[i][j] = 0;
        }
    }
    return P;
}

void realizable(int *A, int n, int T) {
    int S = 0;
    for (int i = 0; i < n; i++) {
        S += A[i];
    }

    int **P = allocateTable(n, S);

    P[0][S] = 1; // 0 is realizable by no elements
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j <= 2 * S; j++) {
            if (P[i - 1][j]) {
                P[i][j - A[i - 1]] = 1;
                P[i][j + A[i - 1]] = 1;
            }
        }
    }

    if (P[n][T + S]) {
        printf("T is realizable by the array A.\n");
    } else {
        printf("T is not realizable by the array A.\n");
    }

    for (int i = 0; i <= n; i++) {
        free(P[i]);
    }
    free(P);
}

void showone(int *A, int n, int T) {
    int S = 0;
    for (int i = 0; i < n; i++) {
        S += A[i];
    }

    int **P = allocateTable(n, S);

    P[0][S] = 1; // 0 is realizable by no elements
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j <= 2 * S; j++) {
            if (P[i - 1][j]) {
                P[i][j - A[i - 1]] = 1;
                P[i][j + A[i - 1]] = 1;
            }
        }
    }

    if (P[n][T + S]) {
        printf("One realization of T is: ");
        int j = T + S;
        for (int i = n; i >= 1; i--) {
            if (j - A[i - 1] >= 0 && P[i - 1][j - A[i - 1]]) {
                printf("+%d ", A[i - 1]);
                j -= A[i - 1];
            } else if (j + A[i - 1] <= 2 * S && P[i - 1][j + A[i - 1]]) {
                printf("-%d ", A[i - 1]);
                j += A[i - 1];
            }
        }
        printf("= %d\n", T);
    } else {
        printf("T is not realizable by the array A.\n");
    }

    for (int i = 0; i <= n; i++) {
        free(P[i]);
    }
    free(P);
}

void showall(int *A, int n, int T) {
    int S = 0;
    for (int i = 0; i < n; i++) {
        S += A[i];
    }

    int **P = allocateTable(n, S);

    P[0][S] = 1; // 0 is realizable by no elements
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j <= 2 * S; j++) {
            if (P[i - 1][j]) {
                P[i][j - A[i - 1]] = 1;
                P[i][j + A[i - 1]] = 1;
            }
        }
    }

    if (!P[n][T + S]) {
        printf("T is not realizable by the array A.\n");
        return;
    }

    int *solution = (int *)malloc(n * sizeof(int));

    int solutionCount = 0;

    void generateSolution(int i, int j){
        if (i == 0) {
            solution[solutionCount++] = j;
            return;
        }
        if (j - A[i - 1] >= 0 && P[i - 1][j - A[i - 1]]) {
            generateSolution(i - 1, j - A[i - 1]);
            solution[solutionCount++] = A[i - 1];
        }
        if (j + A[i - 1] <= 2 * S && P[i - 1][j + A[i - 1]]) {
            generateSolution(i - 1, j + A[i - 1]);
            solution[solutionCount++] = -A[i - 1];
        }
    }

    generateSolution(n, T + S);

    printf("Number of realizations of T: %d\n", solutionCount);
    for (int i = 0; i < solutionCount; i++) {
        printf("Realization %d: ", i + 1);
        int j = T + S;
        for (int k = n; k >= 1; k--) {
            if (solution[i] == A[k - 1] && j - A[k - 1] >= 0 && P[k - 1][j - A[k - 1]]) {
                printf("+%d ", A[k - 1]);
                j -= A[k - 1];
            } else if (solution[i] == -A[k - 1] && j + A[k - 1] <= 2 * S && P[k - 1][j + A[k - 1]]) {
                printf("-%d ", A[k - 1]);
                j += A[k - 1];
            }
        }
        printf("= %d\n", T);
    }

    free(solution);

    for (int i = 0; i <= n; i++) {
        free(P[i]);
    }
    free(P);
}

int main() {
    int n, T;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int *A = (int *)malloc(n * sizeof(int));
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }

    printf("Enter the target value T: ");
    scanf("%d", &T);

    realizable(A, n, T);
    showone(A, n, T);
    showall(A, n, T);

    free(A);

    return 0;
}
