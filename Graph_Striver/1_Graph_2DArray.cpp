#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;  //vertices,edges
    cin>>n>>m;
    int adj[n+1][m+1]={0};
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        adj[u][v]=1;
        adj[v][u]=1;
    }

    // S.C. => O(n*n)
}