//{ Driver Code Starts
// #include <bits/stdc++.h>
// using namespace std;

// } Driver Code Ends
// User function Template for C++

int mod=1e9+7;
class Solution {
  public:
    int countPaths(int n, vector<vector<int>>& roads) {
        vector<pair<int,int>> adj[n];
        for(int i=0;i<roads.size();i++){
            adj[roads[i][0]].push_back({roads[i][1],roads[i][2]});
            adj[roads[i][1]].push_back({roads[i][0],roads[i][2]});
        }
        
        
        vector<int> stime(n,1e18);
        vector<long long> possiblepath(n,0);
        priority_queue<pair<long long,int>, vector<pair<long long,int>>, greater<pair<long long,int>> > pq;
        pq.push({0,0}); 
        possiblepath[0]=1;
        stime[0]=0;
        while(!pq.empty()){
            pair<long long,int> front=pq.top();
            pq.pop();
            
            long long ttime=front.first;
            int node=front.second;
            
            for(auto it:adj[node]){
                int adjNode=it.first;
                long long edgeWt=it.second;
                if(ttime+edgeWt < stime[adjNode]){
                    stime[adjNode]=ttime+edgeWt;
                    possiblepath[adjNode]=(possiblepath[node])%mod;
                    pq.push({(ttime+edgeWt),adjNode});
                }else if(ttime+edgeWt == stime[adjNode]){
                    possiblepath[adjNode]=(possiblepath[adjNode]+possiblepath[node])%mod;
                }
            }
        }
        return (possiblepath[n-1])%mod; 
    }
};

//{ Driver Code Starts.

// int main() {
//     int T;
//     cin >> T;
//     while (T--) {
//         int n, m;
//         cin >> n >> m;
//         int u, v;

//         vector<vector<int>> adj;

//         for (int i = 0; i < m; ++i) {
//             vector<int> temp;
//             for (int j = 0; j < 3; ++j) {
//                 int x;
//                 cin >> x;
//                 temp.push_back(x);
//             }
//             adj.push_back(temp);
//         }

//         Solution obj;
//         cout << obj.countPaths(n, adj) << "\n";
//     }

//     return 0;
// }
// } Driver Code Ends