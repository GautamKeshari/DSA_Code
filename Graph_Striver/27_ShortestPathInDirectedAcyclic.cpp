// https://practice.geeksforgeeks.org/problems/shortest-path-in-undirected-graph/1

// //{ Driver Code Starts
// // Initial Template for C++

// #include <bits/stdc++.h>
// using namespace std;

// // } Driver Code Ends
// // User function Template for C++
// class Solution {
// private:
//     void topoSort(int node,vector<pair<int,int> > adj[],vector<int>& vis,stack<int>& st)
//     {
//         vis[node]=1;
//         for(auto it:adj[node]){
//             int v=it.first;
//             if(!vis[v]){
//                 topoSort(v,adj,vis,st);
//             }
//         }
//         st.push(node);
//     }
    
// public:
//     vector<int> shortestPath(int N,int M, vector<vector<int>>& edges){
//         // step1: first make adjacency list of next edge,weight from current edge
//         vector<pair<int,int> >adj[N];
//         for(int i=0;i<M;i++){
//             int u=edges[i][0];
//             int v=edges[i][1];
//             int wt=edges[i][2];
//             adj[u].push_back({v,wt});
//         }
        
//         // step2: find the topo sort
//         vector<int> vis(N,0);
//         stack<int> st;
//         // O(N+M)
//         for(int i=0;i<N;i++){
//             if(!vis[i]){
//                 topoSort(i,adj,vis,st);
//             }
//         }
        
//         // step3: make the distance array and update distance of each node
//         // and also pop element from stack
        
//         vector<int> dist(N,1e9);
//         // since src is 0(given)
//         dist[0]=0;
//         // O(N+M)
//         while(!st.empty()){
//             int node=st.top();
//             st.pop();
            
//             for(auto it:adj[node]){
//                 int v=it.first;
//                 int wt=it.second;
//                 if(dist[node]+wt < dist[v]){
//                     dist[v]=dist[node]+wt;
//                 }
//             }
//         }
//         // if any node not visited then assign it distance to -1
//         for(int i=0;i<dist.size();i++){
//             if(dist[i]==1e9){
//                 dist[i]=-1;
//             }
//         }
//         return dist;
        
//     }
// };


// //{ Driver Code Starts.
// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int n, m;
//         cin >> n >> m;
//         vector<vector<int>> edges;
//         for(int i=0; i<m; ++i){
//             vector<int> temp;
//             for(int j=0; j<3; ++j){
//                 int x; cin>>x;
//                 temp.push_back(x);
//             }
//             edges.push_back(temp);
//         }
//         Solution obj;
//         vector<int> res = obj.shortestPath(n, m, edges);
//         for (auto x : res) {
//             cout << x << " ";
//         }
//         cout << "\n";
//     }
// }

// // } Driver Code Ends