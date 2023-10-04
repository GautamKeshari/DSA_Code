// #include <bits/stdc++.h> 
// int funct(int index,vector<int> &heights,vector<int>&dp){
//     if(index==0) return 0;

//     if(dp[index]!=-1) return dp[index];
//     int left=funct(index-1,heights,dp)+abs(heights[index]-heights[index-1]);
//     int right=INT_MAX;
//     if(index>1){
//         right=funct(index-2,heights,dp)+abs(heights[index]-heights[index-2]);
//     }
//     return dp[index]=min(left,right);
// }

// int frogJump(int n, vector<int> &heights)
// {
//     vector<int>dp(n,-1);
//     return funct(n-1,heights,dp); // we use n-1 because we have to reach (n-1)th index in 0 base indexing.
// }