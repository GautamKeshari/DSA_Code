// https://practice.geeksforgeeks.org/problems/eventual-safe-states/1

// //{ Driver Code Starts
// // Initial Template for C++

// #include <bits/stdc++.h>
// using namespace std;

// // } Driver Code Ends
// // User function Template for C++

// class Solution {
// private:
//     bool dfsCheck(int node, vector<int> adj[],vector<int>& vis,vector<int>& pathVis,int check[])
//     {
//         vis[node]=1;
//         pathVis[node]=1;
//         check[node]=0;
//         // traverse for adjacent nodes
//         for(auto it:adj[node]){
//             // if node is not visited
//             if(!vis[it]){
//                 if(dfsCheck(it,adj,vis,pathVis,check)==true){ 
//                     // if we get cycle in any recursion call,then it means 
//                     // all incoming nodes attached to it are also not safe node.
//                     check[node]=0;
//                     return true;
//                 }
//             }
//             // if node has previously visited
//             // if we are visited on the same path
//             else if(pathVis[it]==1)
//             {
//                 // if this node form a cycle then this node is not safe node
//                 check[node]=0;
//                 return true;     
//             }
//         }
//         check[node]=1;
//         pathVis[node]=0;
//         return false;
//     }
//   public:
//     vector<int> eventualSafeNodes(int V, vector<int> adj[]) {
//         vector<int> vis(V,0);
//         vector<int> pathVis(V,0);
        
//         // if for any node visited[node] is true and pathVisited[node]=1 ,it means it belong to same path
//         int check[V]={0};
//         vector<int>safeNodes;
        
//         for(int i=0;i<V;i++){
//             if(!vis[i]){
//                 // we do not break ,if we get safe node, but we check all the possible unvisited nodes.
//                 // if contains cycle then return true 
//                 dfsCheck(i,adj,vis,pathVis,check);
//             }
//         }
        
//         for(int i=0;i<V;i++){
//             if(check[i]==1){
//                 safeNodes.push_back(i);
//             }
//         }
//         return safeNodes;
//     }
// };
// //{ Driver Code Starts.

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int V, E;
//         cin >> V >> E;
//         vector<int> adj[V];
//         for (int i = 0; i < E; i++) {
//             int u, v;
//             cin >> u >> v;
//             adj[u].push_back(v);
//         }
//         Solution obj;
//         vector<int> safeNodes = obj.eventualSafeNodes(V, adj);
//         for (auto i : safeNodes) {
//             cout << i << " ";
//         }
//         cout << endl;
//     }
// }

// // } Driver Code Ends