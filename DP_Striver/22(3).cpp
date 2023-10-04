// long countWaysToMakeChange(int *denominations, int n, int value)
// {
//     int *arr=denominations;
//     long dp[n][value+1]={0};

//     for(int T=0;T<=value;T++){
//         dp[0][T]= (T%arr[0]==0);
//     }

//     for(int ind=1;ind<n;ind++){
//         for(int T=0;T<=value;T++){
//             long notTake=dp[ind-1][T];
//             long take=0;
//             if(arr[ind]<=T){
//                 take=dp[ind][T-arr[ind]];
//             }
//             dp[ind][T]=take+notTake;
//         }
//     }

//     return dp[n-1][value];
// }