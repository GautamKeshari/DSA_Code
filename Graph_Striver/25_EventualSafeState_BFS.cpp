// https://practice.geeksforgeeks.org/problems/eventual-safe-states/1

// //{ Driver Code Starts
// // Initial Template for C++

// #include <bits/stdc++.h>
// using namespace std;


// // } Driver Code Ends
// // User function Template for C++

// class Solution {
// private:
//     // Backtracking
//     // this method has t.c. => O(n log n) while(using dfs takes O(n) time);
//   public:
//     vector<int> eventualSafeNodes(int V, vector<int> adj[]) 
//     {
//         vector<int> adjRev[V];
//         vector<int> indegree(V,0);
// 	    vector<int> vis(V,0);
// 	    queue<int> q;
//         for(int i=0;i<V;i++){
//             for(auto it:adj[i]){
//                 // i -> it
//                 // it -> i
//                 adjRev[it].push_back(i);
// 	            indegree[i]++;
//             }
//         }  
// 	    for(int i=0;i<V;i++){
// 	        if(indegree[i]==0){
// 	            q.push(i);
// 	        }
// 	    }
// 	   // ans 
// 	    vector<int> topo;
// 	    while(!q.empty()){
// 	        int node=q.front();
// 	        topo.push_back(node);
// 	        q.pop();
// 	        for(auto it:adjRev[node]){
// 	            indegree[it]--;
// 	            if(indegree[it]==0){
// 	                q.push(it);
// 	            }
// 	        } 
// 	    }
// 	    sort(topo.begin(),topo.end()); 
// 	    return topo;
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