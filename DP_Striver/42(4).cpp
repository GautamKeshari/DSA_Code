// #include<bits/stdc++.h>
// int f(int ind,int lastIndex,int arr[], int n,vector<vector<int>> &dp){
//     if(ind==n) return 0;

//     if(dp[ind][lastIndex+1]!=-1) return dp[ind][lastIndex+1];
//     int take=0;
//     int notTake=0+f(ind+1,lastIndex,arr,n,dp);
//     if(lastIndex==-1 || arr[ind]>arr[lastIndex]){
//         take=f(ind+1,ind,arr,n,dp)+1;   
//     }
//     return dp[ind][lastIndex+1]=max(take,notTake);
// }

// int longestIncreasingSubsequence(int arr[], int n)
// {
//     vector<int> prev(n+1,0);
//     vector<int> curr(n+1,0);
//     for(int ind=n-1;ind>=0;ind--){
//         for(int lastIndex=ind-1;lastIndex>=-1;lastIndex--){
//             int notTake=0+prev[lastIndex+1];
//             int take=0;
//             if(lastIndex==-1 || arr[ind]>arr[lastIndex]){
//                 take=prev[ind+1]+1;   
//             }
//             curr[lastIndex+1]=max(take,notTake);
//         }
//         prev=curr;
//     }
//     return prev[-1+1];
// }
