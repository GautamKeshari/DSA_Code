// https://practice.geeksforgeeks.org/problems/strongly-connected-components-kosarajus-algo/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=strongly-connected-components-kosarajus-algo

//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    
    void dfs(int node,vector<int> &vis, stack<int>& st,vector<vector<int>>& adj)
    {
        vis[node]=1;
        for(auto it:adj[node]){
            if(!vis[it]){
                dfs(it,vis,st,adj);
            }
        }
        st.push(node);
    }
    // O(V+E)
    void dfst(int node, vector<int> &vis, vector<vector<int>>& revGraph)
    {
        vis[node]=1;
        for(auto it:revGraph[node]){
            if(!vis[it]){
                dfst(it,vis,revGraph);
            }
        }
    }
    
public:
    int kosaraju(int V, vector<vector<int>>& adj)
    {
        vector<int> vis(V,0);
        stack<int> st;
        //sorting all the edges according to finishing time.
        for(int i=0;i<V;i++){
            if(!vis[i]){
                dfs(i,vis,st,adj);
            }
        }
        
        vector<vector<int>> revGraph(V);    // if we not declare size then the code will show runtime error
        for(int i=0;i<V;i++){
            vis[i]=0;
            for(auto it:adj[i]){
                revGraph[it].push_back(i);
            }
        }
        
        // vis.resize(V,0);
        int count=0;    // count of strongly connected component
        while(!st.empty()){
            int node=st.top();
            st.pop();
            if(!vis[node]){
                count++;
                dfst(node,vis,revGraph);
            }
        }
        return count;
    }
};

//{ Driver Code Starts.


int main()
{
    
    int t;
    cin >> t;
    while(t--)
    {
    	int V, E;
    	cin >> V >> E;

    	vector<vector<int>> adj(V);

    	for(int i = 0; i < E; i++)
    	{
    		int u, v;
    		cin >> u >> v;
    		adj[u].push_back(v);
    	}

    	Solution obj;
    	cout << obj.kosaraju(V, adj) << "\n";
    }

    return 0;
}


// } Driver Code Ends