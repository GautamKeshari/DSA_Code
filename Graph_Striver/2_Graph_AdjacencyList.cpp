#include<bits/stdc++.h>
using namespace std;
// Garph can be stored in 2 ways :- 
// using adjacency matrix
// using list
int main(){
    int n,m;  //no.of vertex,edges
    cin>>n>>m;
    vector<int> adj[n+1];
    for(int i=0;i<m;i++){
        int u,v;  // for edges b/w two vertices
        cin>>u>>v;
        adj[u].push_back(v);   
        adj[v].push_back(u);
    }

    // S.C. => O(2*Edges)
}
