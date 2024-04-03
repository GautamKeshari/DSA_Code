// #include <bits/stdc++.h>

// int f(int ind,vector<int> &num,int target,vector<vector<int>> &dp){
//     if(ind==0){
//         if((target%num[ind])==0) return target/num[ind]; 
//         return 1e9;
//     }
//     if(dp[ind][target]!=-1) return dp[ind][target];

//     int nottake=0+f(ind-1,num,target,dp);
//     int take=1e9;
//     if(num[ind]<=target){
//         take=1+f(ind,num,target-num[ind],dp);
//     }
//     return dp[ind][target]=min(take,nottake);
// }

// int minimumElements(vector<int> &num, int x)
// {
//     int n=num.size();
//     vector<vector<int> >dp(n,vector<int>(x+1,-1));
//     int ans= f(n-1,num,x,dp);
//     if(ans>=1e9) return -1;
//     return ans;
// }