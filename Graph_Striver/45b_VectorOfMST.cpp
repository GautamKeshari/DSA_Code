//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
	//Function to find sum of weights of edges of the Minimum Spanning Tree.
    int spanningTree(int V, vector<vector<int>> adj[])
    {
        priority_queue< pair<int,pair<int,int>>,vector<pair<int,pair<int,int>> >,
                greater<pair<int,pair<int,int>>> > pq;  //wt,node,parent
        
        pq.push({0,{0,-1}});
        vector<int> vis(V,0);
        vector<pair<int,int>> mst;
        int sum=0;    // sum of minimum spanning tree
        while(!pq.empty()){
            auto x=pq.top();
            pq.pop();
            int wt=x.first;
            int node=x.second.first;
            int parent=x.second.second;
            if(vis[node]==1) continue;
            
            if(parent!=-1 && !vis[node]){
                mst.push_back({parent,node});
                sum+=wt;
            }
            vis[node]=1;
            
            for(auto it:adj[node]){
                int adjN=it[0];
                int edgeW=it[1];
                if(!vis[adjN]){
                    pq.push({edgeW,{adjN,node}});
                }
            }
        }
        // for(int i=0;i<mst.size();i++){
        //     cout<<mst[i].first<<" "<<mst[i].second<<endl;
        // }
        return sum;
    }
};

//{ Driver Code Starts.


int main()
{
    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;
        vector<vector<int>> adj[V];
        int i=0;
        while (i++<E) {
            int u, v, w;
            cin >> u >> v >> w;
            vector<int> t1,t2;
            t1.push_back(v);
            t1.push_back(w);
            adj[u].push_back(t1);
            t2.push_back(u);
            t2.push_back(w);
            adj[v].push_back(t2);
        }
        
        Solution obj;
    	cout << obj.spanningTree(V, adj) << "\n";
    }

    return 0;
}


// } Driver Code Ends