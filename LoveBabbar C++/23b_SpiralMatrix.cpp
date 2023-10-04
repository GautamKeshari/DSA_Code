// https://leetcode.com/problems/spiral-matrix/description/

// class Solution {
// public:
//     vector<int> spiralOrder(vector<vector<int>>& matrix) {
//         int row=matrix.size();
//         int col=matrix[0].size();
//         int count=0;
//         vector<int>ans;
//         int total=row*col;
//         int startingRow=0,startingCol=0,endingRow=row-1,endingCol=col-1;

//         while(count<total){
//         for(int index=startingCol;count<total && index<=endingCol;index++){
//             ans.push_back(matrix[startingRow][index]);
//             count++;
//         }
//         startingRow++;
//         for(int index=startingRow;count<total && index<=endingRow;index++){
//             ans.push_back(matrix[index][endingCol]);
//             count++;
//         }
//         endingCol--;
//         for(int index=endingCol;count<total && index>=startingCol;index--){
//             ans.push_back(matrix[endingRow][index]);
//             count++;
//         }
//         endingRow--;
//         for(int index=endingRow;count<total && index>=startingRow;index--){
//             ans.push_back(matrix[index][startingCol]);
//             count++;
//         }
//         startingCol++;

//         }
//         return ans;
//     }
// };