// #include<bits/stdc++.h>
// int solve(int i,int j,int* arr,vector<vector<int>> &dp){
//     if(i==j) return dp[i][j]=0;

//     if(dp[i][j]!=-1) return dp[i][j];

//     int mini=1e9;
//     for(int k=i;k<j;k++){
//         int steps=arr[i-1]*arr[k]*arr[j] + solve(i,k,arr,dp)+ solve(k+1,j,arr,dp);
//         // if(steps<mini) mini=steps;
//         mini=min(mini,steps);
//     }
//     return dp[i][j] = mini;
// }

// int matrixChainMultiplication(int* arr, int n) {
//     vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
//     return solve(1,n,arr,dp);
// }