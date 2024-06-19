//{ Driver Code Starts
// #include <bits/stdc++.h>
// using namespace std;

// } Driver Code Ends

class Solution {
    bool dfs(int node,vector<int> adj[],vector<int> &vis){
        vis[node]=2;
        
        for(auto it:adj[node]){
            if(vis[it]==0){
                if(dfs(it,adj,vis)==1) return 1;
            }else if(vis[it]==2){
                return 1;
            }
        }
        vis[node]=1;
        return 0;
    }
  public:
    // Function to detect cycle in a directed graph.
    // for vis mark vis[i]=1 and for pathVis mark vis[i]=2
    bool isCyclic(int V, vector<int> adj[]) {
        vector<int> vis(V,0);
        for(int i=0;i<V;i++){
            if(!vis[i]){
                if(dfs(i,adj,vis)==1) return 1;
            }
        }
        return 0;
    }
};

//{ Driver Code Starts.

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

// } Driver Code Ends