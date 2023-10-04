// // https://practice.geeksforgeeks.org/problems/n-queen-problem0315/1

// //{ Driver Code Starts
// // Initial Template for C++

// #include <bits/stdc++.h>
// using namespace std;

// // } Driver Code Ends
// // User function Template for C++

// class Solution{
// private:
  
//     void solve(int col,vector<vector<int> >&ans,vector<int> output,vector<int> leftRow,vector<int> lowerDiagonal,vector<int> upperDiagonal,int n){
//         if(col==n){
//             ans.push_back(output);
//             return;
//         }
        
//         // solve 1 case ,then recursion handle the remaining case
//         for(int row=0;row<n;row++){
//             if(leftRow[row]==0 && lowerDiagonal[row+col]==0 
//                     && upperDiagonal[n-1+col-row]==0){
                
//                 leftRow[row]=1;
//                 lowerDiagonal[row+col]=1;
//                 upperDiagonal[n-1+col-row]=1;
//                 output.push_back(row+1);
//                 solve(col+1,ans,output,leftRow,lowerDiagonal,upperDiagonal,n);
//                 // backtrack
//                 leftRow[row]=0;
//                 lowerDiagonal[row+col]=0;
//                 upperDiagonal[n-1+col-row]=0;
//                 output.pop_back();
//             }
//         }
        
//     }
    
// public:
//     vector<vector<int>> nQueen(int n) {
//         vector<vector<int> >ans;
//         vector<int> output;
//         vector<int> leftRow(n,0),upperDiagonal(2*n-1,0),lowerDiagonal(2*n-1,0);
        
//         solve(0,ans,output,leftRow,lowerDiagonal,upperDiagonal,n);
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