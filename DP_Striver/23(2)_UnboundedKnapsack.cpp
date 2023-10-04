// https://www.codingninjas.com/studio/problems/unbounded-knapsack_1215029?source=youtube&campaign=striver_dp_videos&utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_dp_videos&leftPanelTab=1

// // Here W is changing approximately in each call 


// int f(int ind, int W, vector<int> &value, vector<int> &wt,vector<vector<int>> &dp){
//     if(ind==0){
//         return (W / wt[ind])*value[ind];
//     }
//     if(dp[ind][W]!=-1){
//         return dp[ind][W];
//     }

//     int notTake=0 + f(ind-1,W,value,wt,dp);
//     int take=-1e9;
//     if(wt[ind]<=W){
//         take=value[ind] + f(ind,W-wt[ind],value,wt,dp);
//     }
//     return dp[ind][W]=max(take,notTake);
// }

// int unboundedKnapsack(int n, int w, vector<int> &profit, vector<int> &weight){
//     vector<vector<int>> dp(n,vector<int>(w+1,-1));
//     return f(n-1,w,profit,weight,dp);
// }