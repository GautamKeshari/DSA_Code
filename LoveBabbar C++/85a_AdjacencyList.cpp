#include<bits/stdc++.h>
using namespace std;

class graph{
    public:
    unordered_map<int,list<int> > adj;
    // Creating adjacency list of a graph

    void addEdge(int u,int v,bool direction){    // starting edge,ending edge,directed or undirected
        adj[u].push_back(v);

        if(direction==0){            // for undirected graph
            adj[v].push_back(u);
        }
    }

    void printAdjList(){
        for(auto i:adj){
            cout<<i.first<<"-> ";
            for(auto j:i.second){
                cout<<j<<" ";
            }
            cout<<endl;
        }
    }

};

int main(){
    int n,m;
    cout<<"Enter the no. of edges"<<endl;
    cin>>n;

    cout<<"Enter the no. of nodes"<<endl;
    cin>>m;

    graph g;

    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;

        g.addEdge(u,v,0);  // undirected graph
    }

    g.printAdjList();
}