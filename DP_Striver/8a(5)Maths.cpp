// int uniquePaths(int m, int n) {
//          long ans = 1;
//         for(int i = m+n-2, j = 1; i >= max(m, n); i--, j++) 
//             ans = (ans * i) / j;
//         return ans;
// }

// We start at (0, 0) cell and move to (m-1, n-1) cell.
// We need to make m-1 down-moves and n-1 right-moves to reach the destination cell.
// Thus, we need to perform a total number of m+n-2 moves.
// At each cell along the path, we can choose either the right-move or down-move and we need to find the number of unique combinations of these choices (which eventually leads to unique paths).
// This is nothing but calculating the number of different ways to choose m-1 down-moves and n-1 right-moves from a total of m+n-2 moves.

// https://assets.leetcode.com/users/images/21d51a14-9ccf-4828-927d-3c4a27459200_1649227630.9712505.png