// https://www.codingninjas.com/studio/problems/total-unique-paths_1081470?leftPanelTab=0

// #include <bits/stdc++.h>

// int func(int row,int col,vector<vector<int>> &dp){
// 	if(row==0 && col==0) return 1;
// 	if(row<0 || col<0) return 0;

// 	if(dp[row][col]!=-1) return dp[row][col];

// 	int up=func(row-1,col,dp);
// 	int left=func(row,col-1,dp);

// 	return dp[row][col]=up+left;
// }

// int uniquePaths(int m, int n) {
// 	vector<vector<int>> dp(m,vector<int>(n,-1));
// 	return func(m-1,n-1,dp);
// }