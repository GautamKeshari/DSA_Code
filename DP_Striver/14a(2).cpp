// #include <bits/stdc++.h>

// bool f(int ind, int target, vector<int> &arr,vector<vector<int> >&dp){
//     if(target==0) return true;
//     if(ind==0) return (arr[0]==target);

//     if(dp[ind][target]!=-1) return dp[ind][target];
//     bool take=false;
//     if(arr[ind]<=target) take=f(ind-1,target-arr[ind],arr,dp);

//     bool nottake= f(ind-1,target,arr,dp);

//     return dp[ind][target]= take||nottake;
// }

// bool subsetSumToK(int n, int k, vector<int> &arr) {
//     vector<vector<int> >dp(n,vector<int>(k+1,-1));
//     return f(n-1,k,arr,dp);
// }