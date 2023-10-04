// class Solution {
// public:

//     void bfs(vector<vector<int>>& image,vector<vector<int>>& vis, int row, int col, int newColor,int val)
//     {
//         int n=image.size();
//         int m=image[0].size();
        
//         vis[row][col]=1;
//         image[row][col]=newColor;
//         queue<pair<int,int>> q;
//         q.push({row,col});
        
//         while(!q.empty()){
//             int r=q.front().first;
//             int c=q.front().second;
//             q.pop();
            
//             //traverse row-wise up and down in matrix
//             for(int delrow=-1;delrow<=1;delrow++){
//                 int nrow=r + delrow;
                
//                 if(nrow>=0 && nrow<n && image[nrow][c]==val && !vis[nrow][c]){
//                     vis[nrow][c]=1;
//                     image[nrow][c]=newColor;
//                     q.push({nrow,c});
//                 }
//             }
//             //traverse col-wise left and right in matrix
//             for(int delcol=-1;delcol<=1;delcol++){
//                 int ncol = c + delcol;
                
//                 if(ncol>=0 && ncol<m && image[r][ncol]==val && !vis[r][ncol]){
//                     vis[r][ncol]=1;
//                     image[r][ncol]=newColor;
//                     q.push({r,ncol});
//                 }
//             }
//         }
//     }

//     vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
//         int n=image.size();
//         int m=image[0].size();
        
//         vector<vector<int> > vis(n,vector<int>(m,0));
        
//         int val=image[sr][sc];
        
//         // vis[sr][sc]=1;
//         bfs(image,vis,sr,sc,newColor,val);
//         return image;
//     }
// };