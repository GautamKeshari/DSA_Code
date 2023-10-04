// //{ Driver Code Starts
// #include <bits/stdc++.h>
// using namespace std;

// // } Driver Code Ends
// class Solution {
//   private:
//     void dfs(int row,int col,vector<vector<char>> &grid,vector<vector<bool>> &vis,int n,int m)
//     {
//         for(int delrow=-1;delrow<=1;delrow++){
//             for(int delcol=-1;delcol<=1;delcol++){
//                 int nrow=row+delrow;
//                 int ncol=col+delcol;
//                 if(nrow>=0 && nrow<n && ncol>=0 && ncol <m && grid[nrow][ncol]=='1' && !vis[nrow][ncol]){
//                     vis[nrow][ncol]=1;
//                     dfs(nrow,ncol,grid,vis,n,m);
//                 }
//             }
//         }
//     } 
//   public:
//     // Function to find the number of islands.
//     int numIslands(vector<vector<char>>& grid) {
//         int n=grid.size();
//         int m=grid[0].size();
        
//         vector<vector<bool>> vis(n,vector<bool>(m,0));
//         int count=0;
        
//         for(int i=0;i<n;i++){
//             for(int j=0;j<m;j++){
//                 if(grid[i][j]=='1' && !vis[i][j]){
//                     count++;
//                     vis[i][j]=1;
//                     dfs(i,j,grid,vis,n,m);
//                 }
//             }
//         }
//         return count;
//     }
// };

// // { Driver Code Starts.
// int main() {
//     int tc;
//     cin >> tc;
//     while (tc--) {
//         int n, m;
//         cin >> n >> m;
//         vector<vector<char>> grid(n, vector<char>(m, '#'));
//         for (int i = 0; i < n; i++) {
//             for (int j = 0; j < m; j++) {
//                 cin >> grid[i][j];
//             }
//         }
//         Solution obj;
//         int ans = obj.numIslands(grid);
//         cout << ans << '\n';
//     }
//     return 0;
// }
// // } Driver Code Ends