// https://leetcode.com/problems/search-a-2d-matrix-ii/

// class Solution {
// public:
//     bool searchMatrix(vector<vector<int>>& matrix, int target) {
//         int totalRow=matrix.size();
//         int totalCol=matrix[0].size();
        
//         int row=0,col=totalCol-1;
//         while(row<totalRow && col>= 0){
//             if(matrix[row][col]==target) return true;

//             if(matrix[row][col]>target){
//                 col--;
//             }else{
//                 row++;
//             }
//         }
//         return false;
//     }
// };

