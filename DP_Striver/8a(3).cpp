// #include <bits/stdc++.h>

// int uniquePaths(int m, int n) {
// 	vector<vector<int>> dp(m,vector<int>(n,-1));

// 	int row,col;
// 	for(row=0;row<m;row++){
// 		for(col=0;col<n;col++){
// 			if(row==0 && col==0) dp[row][col]=1;
// 			else{
// 				int left=0;
// 				int up=0;
// 				if(row>0) up=dp[row-1][col];
// 				if(col>0) left=dp[row][col-1];
// 				dp[row][col]=up+left;
// 			}
// 		}
// 	}
// 	return dp[row-1][col-1];

// }