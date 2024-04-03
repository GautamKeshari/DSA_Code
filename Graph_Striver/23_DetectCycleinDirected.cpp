// https://practice.geeksforgeeks.org/problems/detect-cycle-in-a-directed-graph/1

// //{ Driver Code Starts
// #include <bits/stdc++.h>
// using namespace std;

// // } Driver Code Ends
// class Solution {
// private:
    
    
//     // we can also solve this by using only visited array by making pair 
//     // mark vis as 1 and to mark path vis mark it as 2
    
// public:
//     // Function to detect cycle in a directed graph.
//     bool isCyclic(int V, vector<int> adj[]) {
//      vector<int> indegree(V,0);
// 	    vector<int> vis(V,0);
// 	    queue<int> q;
	    
// 	    for(int i=0;i<V;i++){
// 	        for(auto it:adj[i]){
// 	            indegree[it]++;
// 	        }
// 	    }
// 	    for(int i=0;i<V;i++){
// 	        if(indegree[i]==0){
// 	            q.push(i);
// 	        }
// 	    }
// 	   // ans 
// 	    int cnt=0;
// 	    while(!q.empty()){
// 	        int node=q.front();
// 	       // topo.push_back(node);
// 	        q.pop();
// 	        cnt++;
// 	        for(auto it:adj[node]){
// 	            indegree[it]--;
// 	            if(indegree[it]==0){
// 	                q.push(it);
// 	            }
// 	        }
	        
// 	    }
	    
// 	    if(cnt==V) 
// 	        return false;
	        
// 	   return true;
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