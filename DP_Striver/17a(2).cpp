// int countWays(vector<int>& arr, int sum,int ind,vector<vector<int>> &dp){
// 	// base case
// 	if(sum==0) return 1;
// 	if(ind==0){
// 		return (arr[0]==sum);
// 	}

// 	if(dp[ind][sum]!=-1) return dp[ind][sum];

// 	int nonpick = countWays(arr,sum,ind-1,dp);
// 	int pick=0;
// 	if(arr[ind]<=sum)
// 		pick = countWays(arr,sum-arr[ind],ind-1,dp);

// 	return dp[ind][sum] = pick+nonpick;
// }

// int findWays(vector<int>& arr, int k)
// {
// 	int n=arr.size();
// 	vector<vector<int>>dp(n,vector<int>(k+1,-1));
// 	int ans=countWays(arr,k,n-1,dp);
// 	return ans; 
// }
