// int f(int ind,int buy,vector<int> values,int n,int count,vector<vector<vector<int>>> &dp){
//     if(count==0) return 0;
//     if(ind==n) return 0;
//     if(dp[ind][buy][count]!=-1) return dp[ind][buy][count];
//     int profit=0;
//     if(buy){
//         profit=max((-values[ind] + f(ind+1,0,values,n,count,dp)), (0+f(ind+1,1,values,n,count,dp)) );    
//     }else{
//         profit=max((values[ind]+f(ind+1,1,values,n, count-1,dp)), (0+f(ind+1,0,values,n,count,dp)) );
//     }
//     return dp[ind][buy][count]=profit;
// }

// int maxProfit(vector<int>& values){
//     int n=values.size();
//     vector<vector<vector<int>>> dp(n,vector<vector<int>> (2,vector<int> (3,-1)));
//     return f(0,1,values,n,2,dp);
// }
