// https://www.codingninjas.com/studio/problems/triangle_1229398?source=youtube&campaign=striver_dp_videos&utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_dp_videos&leftPanelTab=0

// #include <bits/stdc++.h>

// int f(int i,int j,vector<vector<int>>& triangle,int n){
// 	if(i==n-1 || j==n-1) return triangle[i][j];
	
// 	int down=triangle[i][j] + f(i+1,j,triangle,n);
// 	int diag=triangle[i][j] + f(i+1,j+1,triangle,n);
	
// 	return min(down,diag);
// }

// int minimumPathSum(vector<vector<int>>& triangle, int n){
// 	return f(0,0,triangle,n);	
// }