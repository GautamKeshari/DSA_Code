// https://practice.geeksforgeeks.org/problems/rat-in-a-maze-problem/1

// //{ Driver Code Starts
// // Initial template for C++

// #include <bits/stdc++.h >
// using namespace std;


// // } Driver Code Ends
// // User function template for C++

// class Solution{
// private:
//     void solve(vector<vector<int>> &m, int n,vector<string>& ans,
//             vector<vector<int>> vis,int x,int y,string path)
//     {
//         vis[x][y]=1;
//         if(x==n-1 && y==n-1){
//             ans.push_back(path);
//             return;
//         }
        
//         // Up,Down,Left,Right
//         int delx[4]={0,0,-1,+1};
//         int dely[4]={+1,-1,0,0};
//         char direction[4]={'R','L','U','D'};
        
//         for(int i=0;i<4;i++){
//             int newx=x+delx[i];
//             int newy=y+dely[i];
            
//             if(newx>=0 && newx<n && newy>=0 && newy<n && m[newx][newy]==1 && !vis[newx][newy]){
//                 path.push_back(direction[i]);
//                 solve(m,n,ans,vis,newx,newy,path);
//                 path.pop_back();
//             }
//         }
//         vis[x][y]=0;
//     }
// public:
//     vector<string> findPath(vector<vector<int>> &m, int n) {
//         vector<string> ans;
//         // if src or destination is 0,then we never reach to destination
//         if(m[0][0]==0){
//             return ans;
//         }
        
//         // bool vis[n][n]={0};
//         vector<vector<int> >vis=m;
        
//         for(int i=0;i<n;i++){
//             for(int j=0;j<n;j++){
//                 vis[i][j]=0;
//             }
//         }
//         string path="";
//         int x=0;
//         int y=0;
//         solve(m,n,ans,vis,x,y,path);
//         return ans;
//     }
// };

    


// //{ Driver Code Starts.

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int n;
//         cin >> n;
//         vector<vector<int>> m(n, vector<int> (n,0));
//         for (int i = 0; i < n; i++) {
//             for (int j = 0; j < n; j++) {
//                 cin >> m[i][j];
//             }
//         }
//         Solution obj;
//         vector<string> result = obj.findPath(m, n);
//         sort(result.begin(), result.end());
//         if (result.size() == 0)
//             cout << -1;
//         else
//             for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
//         cout << endl;
//     }
//     return 0;
// }
// // } Driver Code Ends