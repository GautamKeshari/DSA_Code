// #include <bits/stdc++.h>

// int uniquePaths(int m, int n) {
	
// 	int row,col;
// 	vector<int> prev(n,0);
// 	for(row=0;row<m;row++){
// 		vector<int> temp(n,0);
// 		for(col=0;col<n;col++){
// 			if(row==0 && col==0) temp[col]=1;
// 			else{
// 				int left=0;
// 				int up=0;
// 				if(col>0) left=temp[col-1];
// 				if(row>0) up=prev[col];
// 				temp[col]=up+left;
// 			}
// 		}
// 		prev=temp;
// 	}
// 	return prev[n-1];

// }