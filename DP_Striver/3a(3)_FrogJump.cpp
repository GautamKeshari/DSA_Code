// #include <bits/stdc++.h> 

// TABULATION TECHNIQUE

// int frogJump(int n, vector<int> &heights)
// {
//     int dp[n+1]={0};
//     dp[0]=0;

//     for(int i=1;i<=n-1;i++){
//         int left=dp[i-1]+abs(heights[i]-heights[i-1]);
//         int right=INT_MAX;
//         if(i>1){
//             right=dp[i-2]+abs(heights[i]-heights[i-2]);    
//         }
//         dp[i]=min(left,right);
//     }

//     return dp[n-1];
// }