// https://leetcode.com/problems/subsets/

// class Solution {
// private:
//     void solve(vector<int>& nums,vector<vector<int> >& ans,vector<int> output,int index,int size){
//         // base case
//         if(index >= size){
//             // output.push_back(nums[index]);
//             ans.push_back(output);
//             return;
//         }
//         // exclude
//         solve(nums,ans,output,index+1,size);

//         // include
//         output.push_back(nums[index]);
//         solve(nums,ans,output,index+1,size);
//     }
// public:
//     vector<vector<int>> subsets(vector<int>& nums) {
//         vector<int>output;
//         int size=nums.size();
//         int index=0;
//         vector<vector<int> > ans;
//         solve(nums,ans,output,index,size);
//         return ans;
//     }
// };