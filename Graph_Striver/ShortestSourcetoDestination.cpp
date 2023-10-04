// https://practice.geeksforgeeks.org/problems/shortest-source-to-destination-path3544/1
// If we want to avoid using visited array then we use this technique.

// //{ Driver Code Starts
// // Initial Template for C++

// #include <bits/stdc++.h>
// using namespace std;

// // } Driver Code Ends
// // User function Template for C++

// class Solution {
//   public:
//     int shortestDistance(int n, int m, vector<vector<int>> arr, int x, int y) {
//         if(arr[0][0]==0 || arr[x][y]==0) return -1;
//         if(x==0 && y==0) return 0;

//         int dr[4]={0,0,-1,1};
//         int dc[4]={-1,1,0,0};
//         queue<pair< pair<int,int>, int>> q;
//         q.push({{0,0},0});
//         arr[0][0]=-1;

//         while(!q.empty()){
//             int n_x=q.front().first.first;
//             int n_y=q.front().first.second;
//             int steps=q.front().second;
//             if(n_x==x && n_y==y) return steps;

//             q.pop();
//             for(int i=0;i<4;i++){
//                 int delx = n_x+dr[i]; int dely = n_y+dc[i];
//                 if(delx>=0 && delx<n && dely>=0 && dely<m && arr[delx][dely]==1)
//                 {
//                     arr[delx][dely]=-1;
//                     q.push({{delx,dely},steps+1});
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
//         int N, M, x, y;
//         cin >> N >> M;
//         vector<vector<int>> v(N, vector<int>(M));
//         for (int i = 0; i < N; i++)
//             for (int j = 0; j < M; j++) cin >> v[i][j];
//         cin >> x >> y;
//         Solution ob;
//         cout << ob.shortestDistance(N, M, v, x, y) << "\n";
//     }
// }
// // } Driver Code Ends