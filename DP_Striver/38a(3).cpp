// #include <bits/stdc++.h>

// int maximumProfit(vector<int> &values, int n, int k)
// {
//     vector<vector<int>> dp(n+1,vector<int>(2*k+1,0));
//     for(int ind=n-1;ind>=0;ind--){
//         for(int trans=0;trans<2*k;trans++){
//             int profit=0;
//             if(trans%2==0){   //if even then buy
//                 profit=max(-values[ind]+dp[ind+1][trans+1],0+dp[ind+1][trans]);
//             }else{
//                 profit=max(values[ind]+dp[ind+1][trans+1],0+dp[ind+1][trans]);
//             }
//             dp[ind][trans]=profit;
//         }
//     }
//     return dp[0][0];
// }
