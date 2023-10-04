// https://www.codingninjas.com/studio/problems/count-ways-to-reach-nth-stairs_798650?leftPanelTab=1

// MEMOIZATION TECHNIQUE

// #include <bits/stdc++.h> 
// #define MOD 1000000007
// int countDistinctWays(int n) {

//     int dp[n+1];
//     dp[0]=1;
//     dp[1]=1;
//     for(int i=2;i<=n;i++){
//         dp[i]=(dp[i-1]+dp[i-2])%MOD;
//     }
//     return dp[n];
// }