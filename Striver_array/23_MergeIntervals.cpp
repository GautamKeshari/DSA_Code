// https://leetcode.com/problems/merge-intervals/

// class Solution {
// public:
//     vector<vector<int>> merge(vector<vector<int>>& intervals) {
//         int n=intervals.size();
//         if(n==1) return intervals;
        
//         sort(intervals.begin(),intervals.end());
//         vector<vector<int>> ans;
//         ans.push_back(intervals[0]);
//         int ind=0;
//         for(int i=1;i<n;i++){
//             int currf=intervals[i][0];
//             int currs=intervals[i][1];
//             int prevf=ans[ind][0];
//             int prevs=ans[ind][1];
//             if(prevs>=currf){
//                 if(prevs<currs){
//                     //prevs will change
//                     ans[ind][1]=currs;
//                 }
//             }else{
//                 ans.push_back(intervals[i]);
//                 ind++;
//             }
//         }
//         return ans;
//     }
// };