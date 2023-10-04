// #include <bits/stdc++.h>

// int minimumPathSum(vector<vector<int>>& triangle, int n){
// 	vector<int>prev(n);
// 	for(int i=0;i<n;i++){
// 		prev[i]=triangle[n-1][i];
// 	}

// 	for(int i=n-2;i>=0;i--){
// 		vector<int>curr(n);
// 		for(int j=i;j>=0;j--){
// 			int down=triangle[i][j]+prev[j];
// 			int diag=triangle[i][j]+prev[j+1];

// 			curr[j]=min(down,diag);
// 		}
// 		prev=curr;
// 	}
// 	return prev[0];	