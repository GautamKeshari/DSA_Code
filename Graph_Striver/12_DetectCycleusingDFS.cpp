// https://practice.geeksforgeeks.org/problems/detect-cycle-in-an-undirected-graph/1

// //{ Driver Code Starts
// #include <bits/stdc++.h>
// using namespace std;

// // } Driver Code Ends
// class Solution {
//   private:
//     bool detect(int src,vector<int> adj[],vector<int>& vis,int parent){
//         vis[src]=1;
        
//         for(auto adjacentNode:adj[src]){
//             if(!vis[adjacentNode]){
//                     if(detect(adjacentNode,adj,vis,src) == true){
//                         return true;
//                     }
//             }else if(vis[adjacentNode] && parent!=adjacentNode){
//                 return true;
//             }                                                                                                    
//         }    
//         return false;
//     }
//   public:
//     // Function to detect cycle in an undirected graph.
//     bool isCycle(int V, vector<int> adj[]) {
//         vector<int> vis(V,0);
        
//         for(int i=0;i<V;i++){
//             if(!vis[i]){
//                 // If we get cycle at any node then we stop traversing further and return ans.
//                 if(detect(i,adj,vis,-1)){
//                     return true; 
//                 }
                
//             }
//         }
//         return false;
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
//         Solution obj;
//         bool ans = obj.isCycle(V, adj);
//         if (ans)
//             cout << "1\n";
//         else
//             cout << "0\n";
//     }
//     return 0;
// }
// // } Driver Code Ends