// #include <bits/stdc++.h>

// int minimumElements(vector<int> &num, int target)
// {
//     int n=num.size();
//     vector<vector<int> >dp(n,vector<int>(target+1,0));

//     // base row
//     for(int i=0;i<=target;i++){
//         if(i%num[0]==0) dp[0][i]=i/num[0];
//         else dp[0][i]=1e9;
//     }

//     for(int ind=1;ind<n;ind++){
//         for(int tar=0;tar<=target;tar++){
//             int nottake=0+dp[ind-1][tar];
//             int take=1e9;
//             if(num[ind]<=tar){
//                 take=1+dp[ind][tar-num[ind]];
//             }
//             dp[ind][tar]=min(take,nottake);
//         }
//     }
//     int ans= dp[n-1][target];
//     if(ans>=1e9) return -1;
//     return ans;
// }