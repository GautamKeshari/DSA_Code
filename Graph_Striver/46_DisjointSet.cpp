#include<bits/stdc++.h>
using namespace std;

class DisjointSet{
        vector<int> rank,parent,size;
    public:
        DisjointSet(int n){
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
// At the same time ,we cannot use the unionBySize and unionByRank.
int main(){
    DisjointSet ds(7);
    ds.unionBySize(1,2);
    ds.unionBySize(2,3);
    ds.unionBySize(4,5);
    ds.unionBySize(6,7);
    ds.unionBySize(5,6);
    // if 3 and 7 belong to same component or not
    if(ds.findUParent(3)==ds.findUParent(7)){
        cout<<"Same\n";
    }else{
        cout<<"Not Same\n";
    }
    ds.unionBySize(3,7);

    // again checking if 3 and 7 belong to same component or not
    if(ds.findUParent(3)==ds.findUParent(7)){
        cout<<"Same\n";
    }else{
        cout<<"Not Same\n";
    }
}

