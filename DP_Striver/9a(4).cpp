// int mod=(int)(1e9+7);
// int mazeObstacles(int n, int m, vector< vector< int> > &mat) {
//     if(mat[0][0]==-1 || mat[n-1][m-1]==-1){
// 		return 0;
// 	}

// 	vector<int>prev(m,0);
// 	for(int i=0;i<n;i++){
// 		vector<int> curr(m,0);
// 		for(int j=0;j<m;j++){
// 			if(mat[i][j]==-1) curr[j]=0;
// 			else if(i==0 && j==0) curr[j]=1;
// 			else{
// 				int left=0,up=0;
// 				if(i>0) up=prev[j];  
// 				if(j>0) left=curr[j-1];	//row>0
// 				curr[j]=(up+left)%mod;
// 			}
// 		}
// 		prev=curr;
// 	}
// 	return prev[m-1];
// }