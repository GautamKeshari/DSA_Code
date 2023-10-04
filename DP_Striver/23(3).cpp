// int unboundedKnapsack(int n, int W, vector<int> &value, vector<int> &wt){
//     vector<vector<int>> dp(n,vector<int>(W+1,0));
//     for(int weight=0;weight<=W;weight++){
//         dp[0][weight]=(weight/wt[0])*value[0];
//     }

//     for(int ind=1;ind<n;ind++){
//         for(int weight=0;weight<=W;weight++){
//             int notTake = 0 + dp[ind-1][weight];
//             int take = -1e9;
//             if(wt[ind]<=weight){
//                 take=value[ind] + dp[ind][weight-wt[ind]];
//             }
//             dp[ind][weight]=max(take,notTake);
//         }
//     }
//     return dp[n-1][W];
// }