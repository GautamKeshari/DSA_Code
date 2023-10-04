// https://practice.geeksforgeeks.org/problems/distance-of-nearest-cell-having-1-1587115620/1

// //{ Driver Code Starts
// #include<bits/stdc++.h>
// using namespace std;

// // } Driver Code Ends
// class Solution 
// {
//     public:
//     //Function to find distance of nearest 1 in the grid for each cell.
// 	vector<vector<int>>nearest(vector<vector<int>>grid)
// 	{
// 	    int n=grid.size();
// 	    int m=grid[0].size();
// 	    vector<vector<int> >dist(n,vector<int>(m,0));
// 	    vector<vector<int> >vis(n,vector<int>(m,0));
// 	   // row,col,distance
// 	    queue<pair<pair<int,int>,int> >q;
	    
// 	    for(int i=0;i<n;i++){
// 	        for(int j=0;j<m;j++){
// 	            if(grid[i][j]==1){
// 	                q.push({{i,j},0});
// 	                vis[i][j]=1;
// 	            }
// 	        }
// 	    }
	    
// 	    int delRow[]={-1,0,1, 0};
//      int delCol[]={ 0,1,0,-1};
// 	   // T.C. = O(n*m)+O(n*m*4);
// 	   // S.C. = O(n*m) + O(n*m) + O(n*m);
// 	    while(!q.empty()){
// 	        int row=q.front().first.first;      
// 	        int col=q.front().first.second;
// 	        int steps=q.front().second;
// 	        dist[row][col]=steps;
// 	        q.pop();
	        
// 	        for(int i=0;i<4;i++){
// 	            int nrow=row+delRow[i];
// 	            int ncol=col+delCol[i];
	            
// 	            if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && vis[nrow][ncol]==0)
// 	            {
// 	                vis[nrow][ncol]=1;
// 	                q.push({{nrow,ncol},steps+1});
// 	            }
// 	        }
// 	    }
// 	    return dist;
// 	}
// };

// //{ Driver Code Starts.
// int main(){
// 	int tc;
// 	cin >> tc;
// 	while(tc--){
// 		int n, m;
// 		cin >> n >> m;
// 		vector<vector<int>>grid(n, vector<int>(m, -1));
// 		for(int i = 0; i < n; i++){
// 			for(int j = 0; j < m; j++){
// 				cin >> grid[i][j];
// 			}
// 		}
// 		Solution obj;
// 		vector<vector<int>> ans = obj.nearest(grid);
// 		for(auto i: ans){
// 			for(auto j: i){
// 				cout << j << " ";
// 			}
// 			cout << "\n";
// 		}
// 	}
// 	return 0;
// }
// // } Driver Code Ends