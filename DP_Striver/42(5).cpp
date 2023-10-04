// https://www.codingninjas.com/studio/problems/longest-increasing-subsequence_630459?source=youtube&campaign=striver_dp_videos&utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_dp_videos&leftPanelTab=1

// #include<bits/stdc++.h>

// int longestIncreasingSubsequence(int arr[], int n)
// {
//     vector<int> dp(n,1);
//     int maxi=1;
//     for(int ind=0;ind<n;ind++){
//         for(int prev=0;prev<ind;prev++){
//             if(arr[prev]<arr[ind]){
//                 dp[ind]=max(1+dp[prev],dp[ind]);
//             }
//         }
//         maxi=max(maxi,dp[index]);
//     }
//     return maxi;
// }
