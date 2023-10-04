// https://practice.geeksforgeeks.org/problems/bipartite-graph/1

// //{ Driver Code Starts
// #include<bits/stdc++.h>
// using namespace std;

// // } Driver Code Ends
// class Solution {
//     bool dfs(int node,int col, vector<int> adj[],vector<int>& color){
// 	    color[node]=col;
// 	    for(it:adj[node]){
// 	        if(color[it]==-1){
// 	            color[it]=!color[node];
// 	            if(dfs(it,color[it],adj,color)==false)
// 	                return false;
// 	       }else{
// 	           if(color[it]==color[node]) 
// 	                return false;
// 	       }
// 	    }
// 	    return true;
//     }
// public:
// 	bool isBipartite(int V, vector<int>adj[]){
// 	    vector<int> color(V, -1);
	    
// 	    for(int i=0;i<V;i++){
// 	        if(color[i]==-1){
// 	            if(dfs(i,0,adj,color)==false){
// 	                return false;
// 	            }
// 	        }
// 	    }
// 	    return true;
// 	}

// };

// //{ Driver Code Starts.
// int main(){
// 	int tc;
// 	cin >> tc;
// 	while(tc--){
// 		int V, E;
// 		cin >> V >> E;
// 		vector<int>adj[V];
// 		for(int i = 0; i < E; i++){
// 			int u, v;
// 			cin >> u >> v;
// 			adj[u].push_back(v);
// 			adj[v].push_back(u);
// 		}
// 		Solution obj;
// 		bool ans = obj.isBipartite(V, adj);    
// 		if(ans)cout << "1\n";
// 		else cout << "0\n";  
// 	}
// 	return 0;
// }
// // } Driver Code Ends