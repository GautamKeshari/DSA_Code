// https://leetcode.com/problems/4sum/

// class Solution {
// public:
//     vector<vector<int>> fourSum(vector<int>& nums, int target) {
//         int n=nums.size();
//         set<vector<int>> st;
//         for(int i=0;i<n;i++){
//             for(int j=i+1;j<n;j++){
//                 set<long long> hashset;
//                 for(int k=j+1;k<n;k++){
//                     long long sum = (long long)target-((long long)nums[i]+(long long)nums[j]+(long long)nums[k]);
//                     if(hashset.find(sum)!=hashset.end()){
//                         vector<int> temp={nums[i],nums[j],nums[k],(int)sum};
//                         sort(temp.begin(),temp.end());
//                         st.insert(temp);
//                     }
//                     hashset.insert(nums[k]);
//                 }        
//             }
//         }
//         vector<vector<int> > ans(st.begin(),st.end());
//         return ans;
//     }
// };