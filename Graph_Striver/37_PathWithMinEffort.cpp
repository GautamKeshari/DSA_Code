// https://practice.geeksforgeeks.org/problems/path-with-minimum-effort/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=path-with-minimum-effort

// //{ Driver Code Starts
// #include <bits/stdc++.h>
// using namespace std;

// // } Driver Code Ends
// class Solution {
//   public:
//     int MinimumEffort(vector<vector<int>>& heights) {
//         int n=heights.size();
//         int m=heights[0].size();
//         vector<vector<int>> effort(n,vector<int>(m,1e9));
        
//         priority_queue< pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>> > pq;
//         //minEffort,row,col
//         pq.push({0,{0,0}});
//         effort[0][0]=0;
        
//         int dr[4]={0,1,0,-1};
//         int dc[4]={1,0,-1,0};
//         while(!pq.empty()){
//             auto it=pq.top();
//             pq.pop();
//             int minEff=it.first;
//             int row=it.second.first;
//             int col=it.second.second;
            
//             if(row==n-1 && col==m-1){
//                 return minEff;
//             }
            
//             for(int i=0;i<4;i++){
//                 int nrow=row+dr[i];    
//                 int ncol=col+dc[i];
                
                
//                 if(nrow>=0 && nrow<n && ncol>=0 && ncol<m){
//                     int diff=abs(heights[nrow][ncol]-heights[row][col]);
//                     int maxi=max(minEff,diff);
//                     if(effort[nrow][ncol]>maxi){
//                         effort[nrow][ncol]=maxi;
//                         pq.push({maxi,{nrow,ncol}});
//                     }
//                 }
//             }
//         }
//         return 0;
//     }
// };

// //{ Driver Code Starts.
// int main() {
//     int tc;
//     cin >> tc;
//     while (tc--) {
//         int n,m; cin>>n>>m;
//         vector<vector<int>> heights;
       
//         for(int i=0; i<n; ++i){
//             vector<int> temp;
//             for(int j=0; j<m; ++j){
//                 int x; cin>>x;
//                 temp.push_back(x);
//             }
//             heights.push_back(temp);
//         }
       
//         Solution obj;
//         cout<<obj.MinimumEffort(heights)<<"\n";
//     }
//     return 0;
// }
// // } Driver Code Ends