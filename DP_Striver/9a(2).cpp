// int mod=(int)(1e9+7);

// int solve(int i, int j, vector< vector< int> > &mat,vector< vector< int> > &dp){
// 	if(i==0 && j==0 && mat[i][j]!=-1) return 1;
// 	if(i<0 || j<0) return 0;
// 	if(mat[i][j]==-1) return 0;

// 	if(dp[i][j]!=-1) return dp[i][j];
// 	int up = solve(i-1,j,mat,dp);
// 	int left = solve(i,j-1,mat,dp);
// 	return dp[i][j]=(up+left)%mod;
// }

// int mazeObstacles(int n, int m, vector< vector< int> > &mat) {
//     if(mat[0][0]==-1 || mat[n-1][m-1]==-1){
// 		return 0;
// 	}
// 	vector< vector< int> > dp(n,vector<int>(m,-1));
// 	return solve(n-1,m-1,mat,dp);
// }