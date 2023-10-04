// https://practice.geeksforgeeks.org/problems/the-celebrity-problem/1

// //{ Driver Code Starts
// //Initial template for C++

// #include<bits/stdc++.h>
// using namespace std;

// // } Driver Code Ends
// //User function template for C++

// class Solution 
// {
//     public:
//     //Function to find if there is a celebrity in the party or not.
//     int celebrity(vector<vector<int> >& M, int n) 
//     {
//         //step1: put all element in stack
//         stack<int> st;
//         for(int i=0;i<n;i++){
//             st.push(i);
//         }
        
//         //step2: run the loop for checking that,is each member is known by someone.
//         while(st.size()>1){
//             int x=st.top();
//             st.pop();
            
//             int y=st.top();
//             st.pop();
            
//             if(M[x][y]==1){   
//                 //then x cannot be celebrity
//                 st.push(y);
//             }
//             if(M[y][x]==1){
//                 st.push(x);
//             }
//         }
        
//         //now only one element left ,now we check that is it celebrity or not
//         //rowcheck
//         int candidate=st.top();
//         bool rowcheck=false;
//         int zeroCnt=0;
//         for(int i=0;i<n;i++){
//             if(M[candidate][i]==0){
//                 zeroCnt++;
//             }
//         }
//         if(zeroCnt!=n){
//             return -1;
//         }
        
//         //column check
//         int oneCnt=0;
//         for(int i=0;i<n;i++){
//             if(M[i][candidate]==1){
//                     oneCnt++;
//             }
//         }
        
//         if(oneCnt!=n-1){
//             return -1;
//         }
//         return candidate;
        
        
        
//     }
// };

// //{ Driver Code Starts.

// int main()
// {
//     int t;
//     cin>>t;
//     while(t--)
//     {
//         int n;
//         cin>>n;
//         vector<vector<int> > M( n , vector<int> (n, 0));
//         for(int i=0;i<n;i++)
//         {
//             for(int j=0;j<n;j++)
//             {
//                 cin>>M[i][j];
//             }
//         }
//         Solution ob;
//         cout<<ob.celebrity(M,n)<<endl;

//     }
// }

// // } Driver Code Ends