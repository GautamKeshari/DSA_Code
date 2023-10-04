// https://leetcode.com/problems/merge-sorted-array/description/

// // S.C. = O(1)

// class Solution {
// public:
//     void merge(vector<int>& num1, int m, vector<int>& num2, int n){
//         int i=m-1,j=n-1;
//         int last=m+n-1;
//         while(i>=0 && j>=0 && last>=0){
//             if(num1[i]>num2[j]){
//                 num1[last]=num1[i];
//                 i--;
//             }else if(num2[j]>=num1[i]){
//                 num1[last]=num2[j];
//                 j--;
//             }
//             last--;
//         }

//         while(i>=0 && last>=0){
//             num1[last]=num1[i];
//             i--;last--;
//         }
        
//         while(j>=0 && last>=0){
//             num1[last]=num2[j];
//             j--;last--;
//         }
//         // return num1;
//     }
// };