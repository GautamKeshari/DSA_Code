// https://leetcode.com/contest/biweekly-contest-110/problems/minimum-seconds-to-equalize-a-circular-array/
// class Solution {
// public:
//     int minimumSeconds(vector<int>& nums) {
//         int n = nums.size();
//         map<int,vector<int> > m;
//         for(int i=0;i<n;i++){
//             m[nums[i]].push_back(i);
//         }
//         int mini=INT_MAX;
//         for(auto it=m.begin();it!=m.end();it++)
//         {
//             vector<int> v=(*it).second;
//             int maxi=-1;
//             int len=v.size();
//             {
//                 for(int i=0;i<len;i++){
//                     if(i==0){
//                         int start=v[0]+1;
//                         int end=n-1-v[len-1];
//                         int val=start+end;
//                         double c=ceil(val/2);
//                         int x=int(c);
//                         maxi=max(maxi,x);
//                     }else{
//                         int val=v[i]-v[i-1];
//                         int c=val/2;
//                         maxi=max(maxi,c);
//                     }
//                 }
//                 cout<<maxi<<endl;
//             }
//             mini=min(mini,maxi);
//             // cout<<mini <<endl;
//         }
//         return mini;
//     }
// };