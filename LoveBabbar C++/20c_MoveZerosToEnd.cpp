// // https://leetcode.com/problems/move-zeroes/description/

// class Solution {
// public:
//     void moveZeroes(vector<int>& nums) {
//         // i indicates element having 0.
//         // j indicates element having non-0.
//         int i=0;        
//         for(int j=0;j<nums.size();j++){
//             if(nums[j]!=0){
//                 swap(nums[i],nums[j]);
//                 i++;
//             }
//         }
//     }
// };