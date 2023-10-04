// #include <bits/stdc++.h> 

// int getMaxPathSum(vector<vector<int>> &matrix)
// {
//     int n=matrix.size();
//     int m=matrix[0].size();
//     vector<vector<int>> dp(n,vector<int>(m,-1));
//     for(int j=0;j<m;j++){
//         dp[0][j]=matrix[0][j];
//     }

//     for(int i=1;i<n;i++){
//         for(int j=0;j<m;j++){
//             if(j==0) dp[i][j]=matrix[i][j]+max(dp[i-1][j],dp[i-1][j+1]);
//             else if(j==m-1) dp[i][j]=matrix[i][j]+max(dp[i-1][j-1],dp[i-1][j]);
//             else{
//                 int up=matrix[i][j] + dp[i-1][j];
//                 int ld=matrix[i][j] + dp[i-1][j-1];
//                 int rd=matrix[i][j] + dp[i-1][j+1];

//                 dp[i][j]=max(up,max(ld,rd));
//             }
//         }
//     }

//     int maxi=-1e8;
//     for(int j=0;j<m;j++){
//         maxi=max(maxi,dp[n-1][j]);
//     }
//     return maxi;
// }