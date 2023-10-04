// https://practice.geeksforgeeks.org/problems/minimum-spanning-tree/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=minimum-spanning-tree

//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class DisjointSet{
        vector<int> rank,parent,size;
    public:
        DisjointSet(int n){
            // S.C. => O(V)
            rank.resize(n+1,0);
            parent.resize(n+1);
            size.resize(n+1,1);    // initially everyone is of size 1.
            for(int i=0;i<=n;i++){
                parent[i]=i;  //initially every node has parent of its own.    
            }
        }

        int findUParent(int node){
            if(node==parent[node]) 
                return node;
            return parent[node]=findUParent(parent[node]);     //path compression in logarithmic time
        }   

        void unionByRank(int u,int v){
            int ulp_u=findUParent(u);  //ultimate parent of u;
            int ulp_v=findUParent(v);  //ultimate parent of v;
            if(ulp_u == ulp_v) return; // if both u and v belong to same component then just return
            if(rank[ulp_u]<rank[ulp_v]){       //smaller guy attach with larger rank guy
                parent[ulp_u]=ulp_v;
            }else if(rank[ulp_u]>rank[ulp_v]){
                parent[ulp_v]=ulp_u;
            }else{
                parent[ulp_v]=ulp_u;
                rank[ulp_u]++;
            }
        }

        void unionBySize(int u,int v){
            int ulp_u=findUParent(u);  //ultimate parent of u;
            int ulp_v=findUParent(v);  //ultimate parent of v;
            if(ulp_u == ulp_v) return; // if b0th u and v belong to same component then just return
            if(size[ulp_u]<size[ulp_v]){
                parent[ulp_u]=ulp_v;
                size[ulp_v]+=size[ulp_u];
            }else if(size[ulp_u]>size[ulp_v]){
                parent[ulp_v]=ulp_u;
                size[ulp_u]+=size[ulp_v];
            }else{
                parent[ulp_v]=ulp_u;
                size[ulp_u]+=size[ulp_v];
            }
        }
};

class Solution
{
	public:
    int spanningTree(int V, vector<vector<int>> adj[])
    {
        vector<pair<int,pair<int,int>>> edges;
        // O(V+E)
        for(int i=0;i<V;i++){
            for(auto it:adj[i]){
                int node=i;
                int adjN=it[0];
                int wt=it[1];
                
                edges.push_back({wt,{node,adjN}});
                // edges.push_back({wt,{adjN,node}});
            }
        }
        
        DisjointSet ds(V);
        sort(edges.begin(),edges.end());  //O(E logE)
        int mstWt=0;
        // O(M*4*alpha*2)
        for(auto it:edges){
            int wt=it.first;
            int u=it.second.first;
            int v=it.second.second;
            
            if(ds.findUParent(u)!=ds.findUParent(v)){
                mstWt+=wt;
                // now connect u with v;
                ds.unionBySize(u,v);
            }
        }
        return mstWt;
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