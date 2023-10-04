// https://www.codingninjas.com/studio/problems/maximum-path-sum-in-the-matrix_797998?source=youtube&campaign=striver_dp_videos&utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_dp_videos&leftPanelTab=0

// #include <bits/stdc++.h> 

// int f(int i,int j,vector<vector<int>> &matrix,int m,vector<vector<int>> &dp){
//     if(j<0 || j>=m) return -1e8;
//     if(i==0) return matrix[0][j];
//     if(dp[i][j]!=-1) return dp[i][j];
//     int up=matrix[i][j] + f(i-1,j,matrix,m,dp);
//     int ld=matrix[i][j] + f(i-1,j-1,matrix,m,dp);
//     int rd=matrix[i][j] + f(i-1,j+1,matrix,m,dp);

//     return dp[i][j]=max(up,max(ld,rd));
// }

// int getMaxPathSum(vector<vector<int>> &matrix)
// {
//     int n=matrix.size();
//     int m=matrix[0].size();
//     vector<vector<int>> dp(n,vector<int>(m,-1));
//     int maxi=-1e8;
//     for(int j=0;j<m;j++){
//         maxi=max(maxi,f(n-1,j,matrix,m,dp));
//     }
//     return maxi;
// }