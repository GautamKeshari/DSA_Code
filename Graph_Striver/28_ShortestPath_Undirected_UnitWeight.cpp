// https://practice.geeksforgeeks.org/problems/shortest-path-in-undirected-graph-having-unit-distance/1?page=1&sortBy=accuracy&query=page1sortByaccuracy

// // User function Template for C++
// class Solution {
// public:
//     vector<int> shortestPath(vector<vector<int>>& edges, int N,int M, int src){
//         vector<int>adj[N];
//         for(int i=0;i<M;i++){
//             int u=edges[i][0];
//             int v=edges[i][1];
//             adj[u].push_back(v);
//             adj[v].push_back(u);
//         }
        
//         // step2: make the distance array and if distance of curr node is greater
//         // than previous then don't update distance of node
        
//         vector<int> dist(N,1e9);
//         dist[src]=0;
//         queue<pair<int,int>>q;
//         q.push({src,0});
//         // O(N+M)
//         while(!q.empty()){
//             int node=q.front().first;
//             q.pop();
            
//             for(auto it:adj[node]){
//                 // int v=it.first;
//                 int wt=1;
//                 if(dist[node]+wt < dist[it]){
//                     // pushing into queue ,it less distance to some node is obtained
//                     q.push({ it , dist[node]+wt });
//                     dist[it]=dist[node]+wt;
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