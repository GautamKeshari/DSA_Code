// https://www.codingninjas.com/studio/problems/maze-obstacles_977241?source=youtube&campaign=striver_dp_videos&utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_dp_videos&leftPanelTab=0

// int solve(int i, int j, vector< vector< int> > &mat){
// 	if(i==0 && j==0 && mat[i][j]!=-1) return 1;
// 	if(i<0 || j<0) return 0;
// 	if(mat[i][j]==-1) return 0;

// 	int up = solve(i-1,j,mat);
// 	int left = solve(i,j-1,mat);
// 	return (up+left);
// }

// int mazeObstacles(int n, int m, vector< vector< int> > &mat) {
//     if(mat[0][0]==-1 || mat[n-1][m-1]==-1){
// 		return 0;
// 	}
	
// 	return solve(n-1,m-1,mat);
// }