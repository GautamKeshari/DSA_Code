// https://leetcode.com/problems/permutations/

// class Solution {
// private:
//     void solve(vector<int> nums,int index,vector<vector<int>> &ans){
//         if(index>=nums.size()-1){
//             ans.push_back(nums); 
//             return ;
//         }

//         for(int i=index;i<nums.size();i++){
//             swap(nums[index],nums[i]);
//             solve(nums,index+1,ans);
//             // Backtrack
//             // now again restore original array at that index.
//             swap(nums[index],nums[i]);
//         }
//     }

// public:
//     vector<vector<int>> permute(vector<int>& nums) {
//         vector<vector<int>> ans;
//         int index=0;
//         solve(nums,index,ans);

//         // for lexographically increasing order 
//         sort(ans.begin(),ans.end());
//         return ans;
//     }
// };