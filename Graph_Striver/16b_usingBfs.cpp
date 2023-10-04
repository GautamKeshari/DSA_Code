// //{ Driver Code Starts
// // Initial Template for C++
// #include <bits/stdc++.h>
// using namespace std;


// // } Driver Code Ends
// // User function Template for C++

// class Solution {
//   public:
//     int countDistinctIslands(vector<vector<int>>& grid) {
//         int n=grid.size();
//         int m =grid[0].size();
//         int dr[4]={0,0,-1,1};
//         int dc[4]={-1,1,0,0};
//         set<vector<pair<int,int>>> st;
        
//         vector<vector<int>> vis(n,vector<int> (m,0));
//         for(int i=0;i<n;i++){
//             for(int j=0;j<m;j++){
//                 if(grid[i][j]==1 && !vis[i][j]){
//                     queue<pair<int,int> > q;
//                     vector<pair<int,int>> vec;
//                     q.push({i,j});
//                     vis[i][j]=1;
                    
                    
//                     while(!q.empty()){
//                         int row0=q.front().first;
//                         int col0=q.front().second;
//                         vec.push_back({row0-i, col0-j});
//                         q.pop();
                        
//                         for(int x=0;x<4;x++){
//                             int nrow=row0+dr[x];
//                             int ncol=col0+dc[x];
//                             if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && grid[nrow][ncol]==1 && !vis[nrow][ncol] )
//                             {
//                                 q.push({nrow,ncol});
//                                 vis[nrow][ncol]=1;
//                             }
//                         }
//                     }
//                     st.insert(vec);
//                 }  
//             }
//         }
        
//         return st.size();
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
//         cout << obj.countDistinctIslands(grid) << endl;
//     }
// }
// // } Driver Code Ends