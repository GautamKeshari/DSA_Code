#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;  //no.of vertex,edges
    cin>>n>>m;
    vector<pair<int,int> > adj[n+1];
    for(int i=0;i<m;i++){
        int u,v,wt;  // for edges b/w two vertices
        cin>>u>>v>>wt;
        adj[u].push_back({v,wt});   
        adj[v].push_back({u,wt});
    }
    
}
