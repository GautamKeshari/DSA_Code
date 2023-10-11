#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

#define MAX_SIZE 100

// Structure to store coordinates (x, y)
struct Pair {
    int x, y;
};

// Structure to store the bhulbhulaiya
struct Bhulbhulaiya {
    int m, n;                     // Row and column dimensions
    bool H[MAX_SIZE][MAX_SIZE];   // Horizontal walls
    bool V[MAX_SIZE][MAX_SIZE];   // Vertical walls
    struct Pair P[MAX_SIZE][MAX_SIZE]; // Parent pointers
};

// Function to initialize a bhulbhulaiya
struct Bhulbhulaiya initbhul(int m, int n) {
    struct Bhulbhulaiya B;
    B.m = m;
    B.n = n;
    for (int i = 0; i < m - 1; i++) {
        for (int j = 0; j < n; j++) {
            B.H[i][j] = true; // Initialize horizontal walls
        }
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n - 1; j++) {
            B.V[i][j] = true; // Initialize vertical walls
        }
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            B.P[i][j].x = -1; // Initialize parent pointers
            B.P[i][j].y = -1;
        }
    }
    return B;
}

// Function to print a bhulbhulaiya
void prnbhul(const struct Bhulbhulaiya *B, const struct Pair path[], int path_length) {
    for (int i = 0; i < B->m; i++) {
        for (int j = 0; j < B->n; j++) {
            if (i < B->m - 1) {
                printf("+");
                printf(B->H[i][j] ? "---" : "   ");
            } else {
                printf("+---");
            }
        }
        printf("+\n");
        if (i < B->m - 1) {
            for (int j = 0; j < B->n; j++) {
                printf("|");
                int is_path = 0;
                for (int k = 0; k < path_length; k++) {
                    if (path[k].x == i && path[k].y == j) {
                        is_path = 1;
                        break;
                    }
                }
                if (is_path) {
                    printf(" * ");
                } else {
                    printf("   ");
                }
            }
            printf("|\n");
        }
    }
}

// Function to perform a random DFS traversal and generate a connected bhulbhulaiya
void genbhul(struct Bhulbhulaiya *B) {
    bool visited[MAX_SIZE][MAX_SIZE] = {false};

    int start_i = rand() % B->m;
    int start_j = rand() % B->n;

    int directions[4][2] = { {-1, 0}, {1, 0}, {0, -1}, {0, 1} };

    struct Pair stack[MAX_SIZE * MAX_SIZE];
    int stack_top = 0;

    stack[stack_top].x = start_i;
    stack[stack_top].y = start_j;
    stack_top++;

    while (stack_top > 0) {
        int i = stack[stack_top - 1].x;
        int j = stack[stack_top - 1].y;
        stack_top--;

        visited[i][j] = true;

        // Randomly shuffle the directions
        int perm[4] = {0, 1, 2, 3};
        for (int k = 0; k < 4; k++) {
            int r = rand() % (4 - k) + k;
            int temp = perm[k];
            perm[k] = perm[r];
            perm[r] = temp;
        }

        for (int k = 0; k < 4; k++) {
            int ni = i + directions[perm[k]][0];
            int nj = j + directions[perm[k]][1];

            if (ni >= 0 && ni < B->m && nj >= 0 && nj < B->n &&
                !visited[ni][nj]) {
                // Remove the wall
                if (directions[perm[k]][0] == -1) {
                    B->H[i][j] = false;
                } else if (directions[perm[k]][0] == 1) {
                    B->H[i + 1][j] = false;
                } else if (directions[perm[k]][1] == -1) {
                    B->V[i][j] = false;
                } else if (directions[perm[k]][1] == 1) {
                    B->V[i][j + 1] = false;
                }

                B->P[ni][nj].x = i;
                B->P[ni][nj].y = j;

                stack[stack_top].x = ni;
                stack[stack_top].y = nj;
                stack_top++;
            }
        }
    }
}

// Function to find a path between two cells in the bhulbhulaiya
void findrani(const struct Bhulbhulaiya *B, struct Pair S, struct Pair T, struct Pair path[], int *path_length) {
    *path_length = 0;

    // Trace the path from S to the root using parent pointers
    while (S.x != -1 && S.y != -1) {
        path[*path_length] = S;
        (*path_length)++;
        S = B->P[S.x][S.y];
    }

    // Trace the path from T to the root using parent pointers
    struct Pair path2[MAX_SIZE * MAX_SIZE];
    int path2_length = 0;

    while (T.x != -1 && T.y != -1) {
        path2[path2_length] = T;
        path2_length++;
        T = B->P[T.x][T.y];
    }

    // Combine the two paths
    for (int i = path2_length - 1; i >= 0; i--) {
        path[*path_length] = path2[i];
        (*path_length)++;
    }
}

int main() {
    srand((unsigned int)time(NULL));

    int m, n;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &m, &n);

    struct Bhulbhulaiya B = initbhul(m, n);
    struct Pair path[MAX_SIZE * MAX_SIZE];
    int path_length;

    // Print the initial bhulbhulaiya
    prnbhul(&B, path, 0);

    // Generate a random connected bhulbhulaiya
    genbhul(&B);

    // Print the final bhulbhulaiya
    prnbhul(&B, path, 0);

    // Randomly choose two distinct cells S and T
    struct Pair S, T;

    S.x = rand() % m;
    S.y = rand() % n;

    do {
        T.x = rand() % m;
        T.y = rand() % n;
    } while (S.x == T.x && S.y == T.y);

    printf("Source : %d, %d \n",S.x ,S.y);
    printf("Target : %d, %d \n",T.x ,T.y);
    // Find the unique S-T path in B
    findrani(&B, S, T, path, &path_length);

    // Print the bhulbhulaiya along with the discovered path
    prnbhul(&B, path, path_length);
    struct Pair x,y;
    scanf("%d %d",&x.x,&x.y);
    scanf("%d %d",&y.x,&y.y);
    findrani(&B, x, y, path, &path_length);
     prnbhul(&B, path, path_length);
    return 0;
}