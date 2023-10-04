// https://practice.geeksforgeeks.org/problems/detect-cycle-in-a-directed-graph/1

// //{ Driver Code Starts
// #include <bits/stdc++.h>
// using namespace std;

// // } Driver Code Ends
// class Solution {
// private:
//     bool dfsCheck(int node, vector<int> adj[],vector<int>& vis,vector<int>& pathVis)
//     {
//         vis[node]=1;
//         pathVis[node]=1;
//         // traverse for adjacent nodes
//         for(auto it:adj[node]){
//             // if node is not visited
//             if(!vis[it]){
//                 if(dfsCheck(it,adj,vis,pathVis)==true) return true;
//             }
//             // if node has previously visited
//             // if we are visited on the same path
//             else if(pathVis[it]==1)
//             {
//                 return true; 
//             }
//         }
//         pathVis[node]=0;
//         return false;
//     }
    
//     // we can also solve this by using only visited array by making pair 
//     // mark vis as 1 and to mark path vis mark it as 2
    
// public:
//     // Function to detect cycle in a directed graph.
//     bool isCyclic(int V, vector<int> adj[]) {
//         vector<int> vis(V,0);
//         vector<int> pathVis(V,0);
        
//         for(int i=0;i<V;i++){
//             if(!vis[i]){
//                 // if contains cycle then return true 
//                 if(dfsCheck(i,adj,vis,pathVis)==true) return true;
//             }
//         }
//         return false;
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
//         cout << obj.isCyclic(V, adj) << "\n";
//     }

//     return 0;
// }

// // } Driver Code Ends