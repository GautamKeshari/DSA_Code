// SEE THE USE OF LONG LONG VARIABLE *******

// class Solution {
// public:
//     vector<vector<int>> fourSum(vector<int>& nums, int target) {
//         int n=nums.size();
//         sort(nums.begin(),nums.end());
//         vector<vector<int>> ans;
//         for(int i=0;i<n;i++){
//             if(i>0 && nums[i]==nums[i-1]) continue;
//             for(int j=i+1;j<n;j++){
//                 if(j>i+1 && nums[j]==nums[j-1]) continue;
//                 int k=j+1, l=n-1;
//                 while(k<l){
//                     long long total=nums[i];
//                     total+=nums[j];
//                     total+=nums[k];
//                     total+=nums[l];
                    
//                     if(total>target){
//                         l--;
//                     }else if(total<target){
//                         k++;
//                     }else{
//                         vector<int> temp={nums[i],nums[j],nums[k],nums[l]};
//                         ans.push_back(temp);
//                         k++;l--;
//                         while(k<l && nums[k]==nums[k-1]) k++;
//                         while(k<l && nums[l]==nums[l+1]) l--;
//                     }
//                 }
//             }
//         }
        
//         return ans;
//     }
// };