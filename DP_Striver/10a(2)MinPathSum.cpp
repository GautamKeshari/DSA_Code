// https://www.codingninjas.com/studio/problems/minimum-path-sum_985349?source=youtube&campaign=striver_dp_videos&utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_dp_videos&leftPanelTab=0

// #include <bits/stdc++.h>

// int f(int i,int j,vector<vector<int>> &grid,vector<vector<int>> &dp){
//     if(i==0 && j==0) return grid[i][j];
//     if(i<0 || j<0) return 1e9;
//     if(dp[i][j]!=-1) return dp[i][j];
    
//     int up=grid[i][j]+f(i-1,j,grid,dp);
//     int left=grid[i][j]+f(i,j-1,grid,dp);

//     return dp[i][j]=min(up,left);
// }

// int minSumPath(vector<vector<int>> &grid) {
    // int n=grid.size();
    // int m=grid[0].size();
    // vector<vector<int>>dp(n,vector<int>(m,-1));
    // return f(n-1,m-1,grid,dp);
// }