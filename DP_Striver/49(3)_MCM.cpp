// #include<bits/stdc++.h>

// int matrixChainMultiplication(int* arr, int n) {
//     vector<vector<int>>dp(n+1,vector<int>(n+1,0));
//     for(int i=n;i>0;i--){
//         for(int j=i+1;j<=n;j++){
//             if(i==j) dp[i][j]=0;
//             else{
//                 int mini=1e9;
//                 for (int k = i; k < j; k++) {
//                   int steps =
//                       arr[i - 1] * arr[k] * arr[j] + dp[i][k] + dp[k + 1][j];
//                   mini = min(mini, steps);
//                 }
//                 dp[i][j] = mini;
//             }
//         }
//     }

//     return dp[1][n];
// }