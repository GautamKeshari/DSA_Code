// // https://practice.geeksforgeeks.org/problems/n-queen-problem0315/1

// //{ Driver Code Starts
// // Initial Template for C++

// #include <bits/stdc++.h>
// using namespace std;

// // } Driver Code Ends
// // User function Template for C++

// class Solution{
// private:
//     bool isSafe(int row,int col,vector<vector<int> >&board,int n){
//         int x=row;
//         int y=col;
        
//         // check for same row
//         while(y>=0){
//             if(board[x][y]==1){
//                 return false;
//             }
//             y--;
//         }
        
//         // check for diagonal
//         y=col;
        
//         while(x>=0 && y>=0){
//             if(board[x][y]==1){
//                 return false;
//             }
//             x--;
//             y--;
//         }
        
//         y=col;
//         x=row;
//         while(x<n && y>=0){
//             if(board[x][y]==1){
//                 return false;
//             }
//             x++;
//             y--;
//         }
        
//         return true;
//     }

//     void solve(int col,vector<vector<int> >& board,vector<vector<int> >&ans,vector<int> output,int n){
//         if(col==n){
//             ans.push_back(output);
//             return;
//         }
        
//         // solve 1 case ,then recursion handle the remaining case
//         for(int row=0;row<n;row++){
//             if(isSafe(row,col,board,n)){
//                 // if placing the queen is safe
//                 board[row][col]=1;
//                 output.push_back(row+1);
//                 solve(col+1,board,ans,output,n);
//                 // backtrack
//                 output.pop_back();
//                 board[row][col]=0;
//             }
//         }
        
//     }
    
// public:
//     vector<vector<int>> nQueen(int n) {
//         vector<vector<int> >ans;
//         vector<vector<int> >board(n,vector<int> (n,0));
//         vector<int> output;
        
//         solve(0,board,ans,output,n);
//         return ans;
//     }
// };

// //{ Driver Code Starts.

// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
        
//         Solution ob;
//         vector<vector<int>> ans = ob.nQueen(n);
//         if(ans.size() == 0)
//             cout<<-1<<"\n";
//         else {
//             for(int i = 0;i < ans.size();i++){
//                 cout<<"[";
//                 for(int u: ans[i])
//                     cout<<u<<" ";
//                 cout<<"] ";
//             }
//             cout<<endl;
//         }
//     }
//     return 0;
// }
// // } Driver Code Ends
