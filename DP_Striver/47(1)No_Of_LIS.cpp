// https://www.codingninjas.com/studio/problems/number-of-longest-increasing-subsequence_3751627?source=youtube&campaign=striver_dp_videos&utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_dp_videos&leftPanelTab=0
// #include<bits/stdc++.h>
// int findNumberOfLIS(vector<int> &arr)
// {
//     int n=arr.size();
//     vector<int> dp(n,1),cnt(n,1);
//     int maxi=1;
//     for(int ind=0;ind<n;ind++){
//         for(int prev=0;prev<ind;prev++){
//             if(arr[prev]<arr[ind] && dp[ind]<1+dp[prev]){
//                 dp[ind]=1+dp[prev];
//                 //inherit the count.
//                 cnt[ind]=cnt[prev];
//             }else if(arr[prev]<arr[ind] && dp[ind]==1+dp[prev]){
//                 //increase the count.
//                 cnt[ind]+=cnt[prev];
//             }
//         }
//         maxi=max(maxi,dp[ind]);
//     }
//     int number=0;
//     for(int i=0;i<n;i++){
//         if(dp[i]==maxi){
//             number+=cnt[i];
//         }
//     }
//     return number;
// }