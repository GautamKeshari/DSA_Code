// https://practice.geeksforgeeks.org/problems/number-of-enclaves/1

// //{ Driver Code Starts
// // Initial Template for C++

// #include <bits/stdc++.h>
// using namespace std;


// // } Driver Code Ends
// // User function Template for C++

// class Solution {
//   public:
//     int numberOfEnclaves(vector<vector<int>> &grid) {
//         int n=grid.size();
//         int m=grid[0].size();
        
//         queue<pair<int,int>> q;
//         vector<vector<int> >vis(n,vector<int>(m,0));
//         int delRow[]={-1,0,1, 0};
//         int delCol[]={ 0,1,0,-1};
        
//         // traverse first and last row
//         for(int j=0;j<m;j++){
//             if(!vis[0][j] && grid[0][j]==1){
//                 q.push({0,j});
//             }
            
//             if(!vis[n-1][j] && grid[n-1][j]==1){
//                 q.push({n-1,j});
//             }
//         }
        
//         // traverse first and last column
//         for(int i=0;i<n;i++){
//             if(!vis[i][0] && grid[i][0]==1){
//                 q.push({i,0});
//             }
            
//             if(!vis[i][m-1] && grid[i][m-1]==1){
//                 q.push({i,m-1});
//             }
//         }
        
//         while(!q.empty()){
//             int row=q.front().first;
//             int col=q.front().second;
//             vis[row][col]=1;
//             q.pop();
            
//             for(int i=0;i<4;i++){
//                 int nrow=row+delRow[i];
//                 int ncol=col+delCol[i];
                
//                 if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && !vis[nrow][ncol] && grid[nrow][ncol]==1)
//                 {
//                     q.push({nrow,ncol});
//                 }
//             }
            
//         }
        
//         int count=0;
//         for(int i=0;i<n;i++){
//             for(int j=0;j<m;j++){
//                 if(!vis[i][j] && grid[i][j]==1){
//                     count++;
//                 }
//             }
//         }
//         return count;
//     }
// };


// //{ Driver Code Starts.

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int n, m;
//         cin >> n >> m;
//         vector<vector<int>> grid(n, vector<int>(m));
//         for (int i = 0; i < n; i++) {
//             for (int j = 0; j < m; j++) {
//                 cin >> grid[i][j];
//             }
//         }
//         Solution obj;
//         cout << obj.numberOfEnclaves(grid) << endl;
//     }
// }
// // } Driver Code Ends