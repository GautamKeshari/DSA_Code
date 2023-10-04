// https://practice.geeksforgeeks.org/problems/number-of-provinces/1

// //{ Driver Code Starts
// #include <bits/stdc++.h>
// using namespace std;


// // } Driver Code Ends
// //User function Template for C++

// class Solution {
//   public:
//     void dfs(vector<vector<int>> &adj, int V,int i,int visited[],int &count){
//         for(int j=0;j<V;j++){
//             if(adj[i][j]==1 && !visited[j]){
//                 visited[j]=1;
//                 dfs(adj,V,j,visited,count);
//             }
//         }
//     }
  
//     int numProvinces(vector<vector<int>> adj, int V) {
//         int count=0;
//         int visited[V]={0};
//         for(int i=0;i<V;i++){
//             if(!visited[i]){
//                 visited[i]=1;
//                 count++;
//                 dfs(adj,V,i,visited,count);
//             }
//         }
//         return count;
//     }
// };

// //{ Driver Code Starts.

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int V,x;
//         cin>>V;
        
//         vector<vector<int>> adj;
        
//         for(int i=0; i<V; i++)
//         {
//             vector<int> temp;
//             for(int j=0; j<V; j++)
//             {
//                 cin>>x;
//                 temp.push_back(x);
//             }
//             adj.push_back(temp);
//         }
        

//         Solution ob;
//         cout << ob.numProvinces(adj,V) << endl;
//     }
//     return 0;
// }
// // } Driver Code Ends