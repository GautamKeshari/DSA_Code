// https://www.codingninjas.com/studio/problems/maximum-sum-of-non-adjacent-elements_843261?leftPanelTab=0

// #include <bits/stdc++.h> 

// int func(int index,vector<int> &nums,vector<int> &dp){
//     if(index==0) return nums[index];
//     if(index<0) return 0;
//     if(dp[index]!=-1){
//         return dp[index];
//     }
//     int pick=nums[index] + func(index-2,nums,dp);
//     int nonpick=0 + func(index-1,nums,dp);

//     return dp[index]=max(pick,nonpick);
// }

// int maximumNonAdjacentSum(vector<int> &nums){
//     int size=nums.size();
//     vector<int>dp(size,-1);
//     return func(size-1,nums,dp);
// }