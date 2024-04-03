// https://www.codingninjas.com/studio/problems/best-time-to-buy-and-sell-stock-ii_630282?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=SUBMISSION

// #include<bits/stdc++.h>
// long f(int ind,int buy,long *values,int n,vector<vector<int>> &dp){
//     if(ind==n) return 0;

//     long profit=0;
//     if(dp[ind][buy]!=-1) return dp[ind][buy]; 
//     if(buy){
//         profit=max( (-values[ind] + f(ind+1,0,values,n,dp)), (0+f(ind+1,1,values,n,dp)) );    
//     }else{
//         profit=max( (values[ind]+f(ind+1,1,values,n,dp)), (0+f(ind+1,0,values,n,dp)) );
//     }

//     return dp[ind][buy] = profit;
// }

// long getMaximumProfit(long *values, int n)
// {
//     vector<vector<int>> dp(n,vector<int>(2,-1));
//     return f(0,1,values,n,dp);
// }