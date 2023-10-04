// class Solution {
// private:
//     void solve(vector<int>& nums,vector<vector<int> >& ans,vector<int> output,int index,int size){
//         // base case
//         if(index >= size){
//             // output.push_back(nums[index]);
//             if(sum==k){
//                  ans.push_back(output);
//             }
//             return;
//         }
//         // exclude
//         solve(nums,ans,output,index+1,size,sum);

//         // include
//         output.push_back(nums[index]);
//         solve(nums,ans,output,index+1,size,sum+nums[index]);
//     }
// public:
//     vector<vector<int>> subsets(vector<int>& nums,int k) {
//         vector<int>output;
//         int size=nums.size();
//         int index=0;
//         int sum=0;
//         vector<vector<int> > ans;
//         solve(nums,ans,output,index,size,sum);
//         return ans;
//     }
// };