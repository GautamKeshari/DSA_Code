// class Solution {
// public:
//     vector<vector<int>> threeSum(vector<int>& nums) {
//         int n=nums.size();
//         vector<vector<int>> ans;
//         sort(nums.begin(),nums.end());
//         for(int i=0;i<n;i++){
//             if(i>0 && nums[i]==nums[i-1]) continue;
//                 int j=i+1,k=n-1;
//                 while(j<n && j<k){
//                     int total=nums[i]+nums[j]+nums[k];
//                     if(total==0){
//                         vector<int> temp={nums[i],nums[j],nums[k]};
//                         ans.push_back(temp);
//                         j++;k--;
//                         while(j<k && nums[j]==nums[j-1]) j++;
//                         while(j<k && nums[k]==nums[k+1]) k--;
//                     }else if(total<0){
//                         j++;
//                     }else{
//                         k--;
//                     }
//                 }
            
//         }
//         return ans;
//     }
// };