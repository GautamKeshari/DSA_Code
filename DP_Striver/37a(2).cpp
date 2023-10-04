// int f(int ind,int trans,vector<int> &values,int n,vector<vector<int>> &dp){
//     // trans => transaction
//     if(ind==n || trans==4){
//         return 0;
//     }
//     if(dp[ind][trans]!=-1) return dp[ind][trans];
//     int profit=0;
//     if(trans%2==0){   //if even then buy
//         profit=max(-values[ind]+f(ind+1,trans+1,values,n,dp),0+f(ind+1,trans,values,n,dp));
//     }else{
//         profit=max(values[ind]+f(ind+1,trans+1,values,n,dp),0+f(ind+1,trans,values,n,dp));
//     }
//     return dp[ind][trans]=profit;
// }

// int maxProfit(vector<int>& values){
//     int n=values.size();
//     vector<vector<int>> dp(n,vector<int>(4,-1));
//     return f(0,0,values,n,dp);
// }
