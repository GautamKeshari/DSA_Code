// https://practice.geeksforgeeks.org/problems/rotten-oranges2536/1

// class Solution 
// {
//     public:
//     vector<int> dx={0,1,0,-1};
//     vector<int> dy={1,0,-1,0};
    
//     bool isValid(int i,int j, int m, int n){
//         if(i<0||i==m||j<0||j==n){
//             return false;
//         }
//         return true;
//     }
    
//     //Function to find minimum time required to rot all oranges. 
//     int orangesRotting(vector<vector<int>>& grid) {
//         // Code here
//         int m=grid.size();
//         int n=grid[0].size();
//         queue<pair<int,int>> q;
//         for(int i=0;i<m;i++){
//             for(int j=0;j<n;j++){
//                 if(grid[i][j]==2){
//                     q.push({i,j});
//                 }
//             }
//         }
//         int time=0;
//         while(!q.empty()){
//             int a=q.size();
//             for(int b=0;b<a;b++){
//                 int i=q.front().first;
//                 int j=q.front().second;
//                 q.pop();
//                 for(int k=0;k<4;k++){
//                     int x=i+dy[k];
//                     int y=j+dx[k];
//                     if(isValid(x,y,m,n)&&grid[x][y]==1){
//                         q.push({x,y});
//                         grid[x][y]=2;
//                     }
//                 }
//             }
//             time++;
//         }
//         for(int i=0;i<m;i++){
//             for(int j=0;j<n;j++){
//                 if(grid[i][j]==1){
//                     return -1;
//                 }
//             }
//         }
//         return time-1;
//     }
// };