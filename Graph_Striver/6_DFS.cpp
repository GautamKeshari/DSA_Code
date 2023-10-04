// https://practice.geeksforgeeks.org/problems/depth-first-traversal-for-a-graph/1

// //{ Driver Code Starts
// #include <bits/stdc++.h>
// using namespace std;

// // } Driver Code Ends
// class Solution {
//   private:
//     void dfs(int V,vector<int> &ans,vector<int> &vis,vector<int> adj[]){
//         ans.push_back(V);
//         vis[V]=1;
//         for(auto x:adj[V]){
//             if(!vis[x]){
//                 dfs(x,ans,vis,adj);
//             }
//         }
        
//     }
  
//   public:
//     // Function to return a list containing the DFS traversal of the graph.
//     vector<int> dfsOfGraph(int V, vector<int> adj[]) {
//         vector<int> vis(V,0);
//         vector<int> ans;
//         int start=0;
//         dfs(0,ans,vis,adj);
//         return ans;
//     }
// };

// //{ Driver Code Starts.
// int main() {
//     int tc;
//     cin >> tc;
//     while (tc--) {
//         int V, E;
//         cin >> V >> E;

//         vector<int> adj[V];

//         for (int i = 0; i < E; i++) {
//             int u, v;
//             cin >> u >> v;
//             adj[u].push_back(v);
//             adj[v].push_back(u);
//         }
//         // string s1;
//         // cin>>s1;
//         Solution obj;
//         vector<int> ans = obj.dfsOfGraph(V, adj);
//         for (int i = 0; i < ans.size(); i++) {
//             cout << ans[i] << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }
// // } Driver Code Ends