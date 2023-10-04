// https://practice.geeksforgeeks.org/problems/shortest-path-in-a-binary-maze-1655453161/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=shortest-path-in-a-binary-maze

// //{ Driver Code Starts
// // Initial Template for C++

// #include <bits/stdc++.h>
// using namespace std;

// // } Driver Code Ends
// // User function Template for C++
// class Solution {
//   public:
//     int shortestPath(vector<vector<int>> &grid, pair<int, int> source,
//                      pair<int, int> destination) 
//     {                     
//         if(grid[source.first][source.second]==0) return 0;
//         if(source.first==destination.first && source.second==destination.second){
//             return 0;
//         }
//         queue<pair<int,pair<int,int>>> q;
        
//         int n=grid.size();
//         int m=grid[0].size();
//         vector<vector<int>> dist(n,vector<int>(m,1e9));
//         dist[source.first][source.second]=0;
//         q.push({0,{source.first,source.second}});
        
//         int delRow[4]={-1,0,1,0};
//         int delCol[4]={0,1,0,-1};
//         while(!q.empty()){
//             auto p=q.front();
//             q.pop();
//             int steps=p.first;
//             int row=p.second.first;
//             int col=p.second.second;
            
//             for(int i=0;i<4;i++){
//                 int nrow=row+delRow[i];
//                 int ncol=col+delCol[i];
                
//                 if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && grid[nrow][ncol] && dist[nrow][ncol]>steps+1){
//                     dist[nrow][ncol]=steps+1;
//                     if(nrow==destination.first && ncol==destination.second){
//                         return steps+1;
//                     }
//                     q.push({steps+1,{nrow,ncol}});
//                 }
//             }
//         }
//         return -1;
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

//         pair<int, int> source, destination;
//         cin >> source.first >> source.second;
//         cin >> destination.first >> destination.second;
//         Solution obj;
//         cout << obj.shortestPath(grid, source, destination) << endl;
//     }
// }

// // } Driver Code Ends