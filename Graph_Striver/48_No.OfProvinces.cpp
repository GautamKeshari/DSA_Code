// https://practice.geeksforgeeks.org/problems/number-of-provinces/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=number-of-provinces

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++
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

class Solution {
   
  public:
    int numProvinces(vector<vector<int>> adj, int V) {
        vector<int> parent(V);
        for(int i=0;i<V;i++){
            parent[i]=i;
        }
        
        DisjointSet ds(V);
        
        for(int i=0;i<V;i++){
            for(int j=0;j<V;j++){
                if(adj[i][j]==1){
                    ds.unionBySize(i,j);
                }
            }
        }
        int count=0;
        for(int i=0;i<V;i++){
            if(ds.findUParent(i)==i){
                count++;
            }
        }
        return count;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int V,x;
        cin>>V;
        
        vector<vector<int>> adj;
        
        for(int i=0; i<V; i++)
        {
            vector<int> temp;
            for(int j=0; j<V; j++)
            {
                cin>>x;
                temp.push_back(x);
            }
            adj.push_back(temp);
        }
        

        Solution ob;
        cout << ob.numProvinces(adj,V) << endl;
    }
    return 0;
}
// } Driver Code Ends