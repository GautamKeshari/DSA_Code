#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

#define MAX_SIZE 100

// Structure to store coordinates (row, col)
struct Point {
    int row, col;
};

// Structure to store the maze
struct Maze {
    int rows, cols;                 // Row and column dimensions
    bool horizontalWalls[MAX_SIZE][MAX_SIZE];   // Horizontal walls
    bool verticalWalls[MAX_SIZE][MAX_SIZE];     // Vertical walls
    struct Point parent[MAX_SIZE][MAX_SIZE];    // Parent pointers
};

// Function to initialize a maze
struct Maze initializeMaze(int rows, int cols) {
    struct Maze M;
    M.rows = rows;
    M.cols = cols;
    for (int i = 0; i < rows - 1; i++) {
        for (int j = 0; j < cols; j++) {
            M.horizontalWalls[i][j] = true; // Initialize horizontal walls
        }
    }
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols - 1; j++) {
            M.verticalWalls[i][j] = true; // Initialize vertical walls
        }
    }
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            M.parent[i][j].row = -1; // Initialize parent pointers
            M.parent[i][j].col = -1;
        }
    }
    return M;
}

// Function to print the maze
void printMaze(const struct Maze *M, const struct Point path[], int pathLength) {
    for (int i = 0; i < M->rows; i++) {
        for (int j = 0; j < M->cols; j++) {
            if (i < M->rows - 1) {
                printf("+");
                printf(M->horizontalWalls[i][j] ? "---" : "   ");
            } else {
                printf("+---");
            }
        }
        printf("+\n");
        if (i < M->rows - 1) {
            for (int j = 0; j < M->cols; j++) {
                printf("|");
                int isPath = 0;
                for (int k = 0; k < pathLength; k++) {
                    if (path[k].row == i && path[k].col == j) {
                        isPath = 1;
                        break;
                    }
                }
                if (isPath) {
                    printf(" * ");
                } else {
                    printf("   ");
                }
            }
            printf("|\n");
        }
    }
}

// Function to perform a random DFS traversal and generate a connected maze
void generateMaze(struct Maze *M) {
    bool visited[MAX_SIZE][MAX_SIZE] = {false};

    int startRow = rand() % M->rows;
    int startCol = rand() % M->cols;

    int directions[4][2] = { {-1, 0}, {1, 0}, {0, -1}, {0, 1} };

    struct Point stack[MAX_SIZE * MAX_SIZE];
    int stackTop = 0;

    stack[stackTop].row = startRow;
    stack[stackTop].col = startCol;
    stackTop++;

    while (stackTop > 0) {
        int currentRow = stack[stackTop - 1].row;
        int currentCol = stack[stackTop - 1].col;
        stackTop--;

        visited[currentRow][currentCol] = true;

        // Randomly shuffle the directions
        int perm[4] = {0, 1, 2, 3};
        for (int k = 0; k < 4; k++) {
            int r = rand() % (4 - k) + k;
            int temp = perm[k];
            perm[k] = perm[r];
            perm[r] = temp;
        }

        for (int k = 0; k < 4; k++) {
            int newRow = currentRow + directions[perm[k]][0];
            int newCol = currentCol + directions[perm[k]][1];

            if (newRow >= 0 && newRow < M->rows && newCol >= 0 && newCol < M->cols &&
                !visited[newRow][newCol]) {
                // Remove the wall
                if (directions[perm[k]][0] == -1) {
                    M->horizontalWalls[currentRow][currentCol] = false;
                } else if (directions[perm[k]][0] == 1) {
                    M->horizontalWalls[currentRow + 1][currentCol] = false;
                } else if (directions[perm[k]][1] == -1) {
                    M->verticalWalls[currentRow][currentCol] = false;
                } else if (directions[perm[k]][1] == 1) {
                    M->verticalWalls[currentRow][currentCol + 1] = false;
                }

                M->parent[newRow][newCol].row = currentRow;
                M->parent[newRow][newCol].col = currentCol;

                stack[stackTop].row = newRow;
                stack[stackTop].col = newCol;
                stackTop++;
            }
        }
    }
}

// Function to find a path between two cells in the maze
void findPath(const struct Maze *M, struct Point start, struct Point end, struct Point path[], int *pathLength) {
    *pathLength = 0;

    // Trace the path from start to the root using parent pointers
    while (start.row != -1 && start.col != -1) {
        path[*pathLength] = start;
        (*pathLength)++;
        start = M->parent[start.row][start.col];
    }

    // Trace the path from end to the root using parent pointers
    struct Point reversePath[MAX_SIZE * MAX_SIZE];
    int reversePathLength = 0;

    while (end.row != -1 && end.col != -1) {
        reversePath[reversePathLength] = end;
        reversePathLength++;
        end = M->parent[end.row][end.col];
    }

    // Combine the two paths
    for (int i = reversePathLength - 1; i >= 0; i--) {
        path[*pathLength] = reversePath[i];
        (*pathLength)++;
    }
}

int main() {
    srand((unsigned int)time(NULL));

    int numRows, numCols;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &numRows, &numCols);

    struct Maze M = initializeMaze(numRows, numCols);
    struct Point path[MAX_SIZE * MAX_SIZE];
    int pathLength;

    // Print the initial maze
    printMaze(&M, path, 0);

    // Generate a random connected maze
    generateMaze(&M);

    // Print the final maze
    printMaze(&M, path, 0);

    // Randomly choose two distinct cells start and end
    struct Point start, end;

    start.row = rand() % numRows;
    start.col = rand() % numCols;

    do {
        end.row = rand() % numRows;
        end.col = rand() % numCols;
    } while (start.row == end.row && start.col == end.col);

    printf("Start : %d, %d \n", start.row, start.col);
    printf("End : %d, %d \n", end.row, end.col);

    // Find the unique start-end path in M
    findPath(&M, start, end, path, &pathLength);

    // Print the maze along with the discovered path
    printMaze(&M, path, pathLength);

    return 0;
}
