// https://practice.geeksforgeeks.org/problems/m-coloring-problem-1587115620/1

// //{ Driver Code Starts
// #include <bits/stdc++.h>
// using namespace std;


// // } Driver Code Ends
// class Solution{
// private:
//     bool isSafe(int node,int col,int color[],bool graph[101][101],int n){
//         for(int k=0;k<n;k++){
//             // node is not same
//             // graph exist b/t these two node
//             // color of adjacent node not same with current node
//             if(k!=node && graph[k][node]==1 && color[k]==col){
//                 return false;
//             }
//         }
//         return true;
//     }

//     bool solve(int node,bool graph[101][101], int m, int n,int color[]){
//         // if we reach at last node by coloring each node with different color
//         if(node==n){
//             return true;
//         }
        
//         // now we check each node with all color
//         for(int i=1;i<=m;i++){
//             if(isSafe(node,i,color,graph,n)){
//                 color[node]=i;
//                 // now we check that is it possible to color next node with different color, if yes return true
//                 // else do backtrack,beacuse this path is not true
//                 if(solve(node+1,graph,m,n,color)){
//                     return true;
//                 }
//                 // backtrack
//                 color[node]=0;
//             }
//         }
//         // if I tried every color from 1 to m,and we find that it is not possible to color node with any color
//         return false;
//     }
// public:
//     // Function to determine if graph can be coloured with at most M colours such
//     // that no two adjacent vertices of graph are coloured with same colour.
//     bool graphColoring(bool graph[101][101], int m, int n) {
//         // initially ,none of the colored with any of the color
//         int color[n]={0};
//         if(solve(0,graph,m,n,color)) return true;
//         return false;
//     }
// };

// //{ Driver Code Starts.

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int n, m, e;
//         cin >> n >> m >> e;
//         int i;
//         bool graph[101][101];
//         for (i = 0; i < n; i++) {
//             memset(graph[i], 0, sizeof(graph[i]));
//         }
//         for (i = 0; i < e; i++) {
//             int a, b;
//             cin >> a >> b;
//             graph[a - 1][b - 1] = 1;
//             graph[b - 1][a - 1] = 1;
//         }
//         Solution ob;
//         cout << ob.graphColoring(graph, m, n) << endl;
//     }
//     return 0;
// }

// // } Driver Code Ends