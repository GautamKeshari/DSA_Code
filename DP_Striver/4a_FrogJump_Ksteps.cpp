// Tabulation

// int frogjumps(int n, vector<int> heights){
//     vector<int> dp(n);
//     dp[0]=0;
//     for(int ind=1;ind<n;ind++){
//         int mini=INT_MAX;
//         for(int x=1;x<=k;x++){
//             if(ind-x>=0){
//                 int jump = dp[ind-x]+ abs(heights[ind]-heights[ind-x]);
//                 mini=min(mini,jump);
//             }
//         }
//         dp[ind]=mini;
//     }
//     reutn dp[n-1];
// }