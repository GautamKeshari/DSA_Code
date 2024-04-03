// https://leetcode.com/problems/partition-array-for-maximum-sum/
// class Solution {
//     int f(int i,vector<int>& arr, int k, int n,vector<int> &dp){
//         if(i==n) return 0;
//         if(dp[i]!=-1) return dp[i];
//         int len=0;
//         int maxiSum=INT_MIN;
//         int maxi=INT_MIN;  
//         for(int j=i;j<min(i+k,n);j++){ 
//             len++;
//             maxi=max(maxi,arr[j]);
//             maxiSum=max(maxiSum,(maxi*len)+f(j+1,arr,k,n,dp));         
//         }
//         return dp[i]=maxiSum;
//     }
// public:
//     int maxSumAfterPartitioning(vector<int>& arr, int k){
//         int n=arr.size();
//         vector<int> dp(n+1,-1);
//         return f(0,arr,k,n,dp);
//     }
// };