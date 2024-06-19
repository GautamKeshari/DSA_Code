// https://www.geeksforgeeks.org/problems/shortest-path-in-weighted-undirected-graph/1

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> shortestPath(int n, int m, vector<vector<int>>& edges) {
        vector<pair<int,int>> adj[n+1];
        for(int i=0;i<m;i++){
            int u=edges[i][0];
            int v=edges[i][1];
            int wt=edges[i][2];
            adj[u].push_back({v,wt});
        }
        
        priority_queue<pair<int,int>,vector<pair<int,int>> ,greater<pair<int,int>>> pq;    //dist,node
        vector<int> dist(n+1,1e9);
        vector<int> lastIndex(n+1,1);
        for(int i=0;i<=n;i++){
            lastIndex[i]=i;
        }
        pq.push({0,1});
        dist[1]=0;
        while(!pq.empty()){
            int dis=pq.top().first;
            int node=pq.top().second;
            pq.pop();
            
            for(auto it:adj[node]){
                int adjNode=it.first;
                int edgeWeight=it.second;
                if(dis+edgeWeight < dist[adjNode]){
                    dist[adjNode]=dis+edgeWeight;
                    lastIndex[adjNode]=node; 
                    pq.push({dis+edgeWeight,adjNode});
                }
            }
        }
        if(dist[n]==1e9) return {-1};
        
        vector<int> ans;
        int index=n;
        while(lastIndex[index]!=index){
            ans.push_back(index);
            index=lastIndex[index];
        }
        ans.push_back(1);
        
        ans.push_back(dist[n]);
        reverse(ans.begin(),ans.end());
        return ans;
    }
};

//{ Driver Code Starts.
// int main() {
//     // your code goes here
//     int t;
//     cin >> t;
//     while (t--) {
//         int n, m;
//         cin >> n >> m;
//         vector<vector<int>> edges;
//         map<pair<int, int>, int> mp;
//         for (int i = 0; i < m; ++i) {
//             vector<int> temp;
//             for (int j = 0; j < 3; ++j) {
//                 int x;
//                 cin >> x;
//                 temp.push_back(x);
//             }
//             edges.push_back(temp);
//             mp[{edges.back()[0], edges.back()[1]}] = edges.back()[2];
//             mp[{edges.back()[1], edges.back()[0]}] = edges.back()[2];
//         }

//         Solution obj;
//         vector<int> res = obj.shortestPath(n, m, edges);
//         int ans = 0;
//         for (int i = 2; i < res.size(); i++) {
//             ans += mp[{res[i], res[i - 1]}];
//         }
//         if (ans == res[0]) {

//         } else if (res.size() == 1 && res[0] == -1)
//             ans = res[0];
//         else
//             ans = -2;
//         cout << ans << endl;
//     }
// }

// } Driver Code Ends