// //{ Driver Code Starts
// #include <bits/stdc++.h>
// using namespace std;

// // } Driver Code Ends
// class Solution {
//   public:
//     vector<int> shortestPath(int n, int m, vector<vector<int>>& edges) {
//         vector<pair<int,int>> adj[n+1];
//         for(int i=0;i<m;i++){
//             int u=edges[i][0];
//             int v=edges[i][1];
//             int wt=edges[i][2];
//             adj[u].push_back({v,wt});
//             adj[v].push_back({u,wt});
//         }
//         // Total Time Complexity=O(V)+O(ElogV)
//         vector<int> dist(n+1,1e9),parent(n+1);
//         for(int i=1;i<=n;i++) parent[i]=i;
//         priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
//         pq.push({0,1});  //dist,node
//         dist[1]=0;
//         while(!pq.empty()){
//             int gap=pq.top().first;
//             int node=pq.top().second;
//             pq.pop();
//             for(auto it:adj[node]){
//                 int adjNode=it.first;
//                 int edgeWeight=it.second;
//                 if(dist[adjNode]>gap+edgeWeight){
//                     dist[adjNode]=gap+edgeWeight;
//                     pq.push({dist[adjNode],adjNode});
//                     parent[adjNode]=node;
//                 }
//             }
//         }
        
//         vector<int> ans;
//         if(dist[n]==1e9) return {-1};
        
//         ans.push_back(n);
//         int currNode=n;
//         while(currNode!=1){            //T.C. => O(V)
//             ans.push_back(parent[currNode]);
//             currNode=parent[currNode];
//         }
//         reverse(ans.begin(),ans.end());
//         return ans;
//     }
// };

// //{ Driver Code Starts.
// int main() {
//     // your code goes here
//     int t;
//     cin >> t;
//     while (t--) {
//         int n, m;
//         cin >> n >> m;
//         vector<vector<int>> edges;
//         for (int i = 0; i < m; ++i) {
//             vector<int> temp;
//             for (int j = 0; j < 3; ++j) {
//                 int x;
//                 cin >> x;
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