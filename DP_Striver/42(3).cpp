// https://www.codingninjas.com/studio/problems/longest-increasing-subsequence_630459?source=youtube&campaign=striver_dp_videos&utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_dp_videos&leftPanelTab=0

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
//     vector<vector<int> > dp(n+1,vector<int>(n+1,0));   // due to shifting of index we use n+1
//     for(int ind=n-1;ind>=0;ind--){
//         for(int lastIndex=ind-1;lastIndex>=-1;lastIndex--){
//             int notTake=0+dp[ind+1][lastIndex+1];
//             int take=0;
//             if(lastIndex==-1 || arr[ind]>arr[lastIndex]){
//                 take=dp[ind+1][ind+1]+1;   
//             }
//             dp[ind][lastIndex+1]=max(take,notTake);
//         }
//     }
//     return dp[0][-1+1];
// }
