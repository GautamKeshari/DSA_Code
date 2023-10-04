// https://www.codingninjas.com/studio/problems/longest-increasing-subsequence_630459?source=youtube&campaign=striver_dp_videos&utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_dp_videos&leftPanelTab=1

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
//     vector<vector<int> > dp(n,vector<int>(n+1,-1));   // due to shifting of index we use n+1
//     // S.C. => O(10^5 * 10^5); so it exceeds the limit.
//     return f(0,-1,arr,n,dp);
// }
