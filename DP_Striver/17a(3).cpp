// int mod=1000000007;
// int findWays(vector<int>& arr, int k)
// {
// 	int n=arr.size();
// 	vector<vector<int>>dp(n,vector<int>(k+1,0));
// 	for(int i=0;i<n;i++){
// 		dp[i][0]=1;
// 	}
// 	if(arr[0]<=k) dp[0][arr[0]]=1;

// 	for(int ind=1;ind<n;ind++){
// 		for(int sum=1;sum<=k;sum++){
// 			int nonpick = dp[ind-1][sum];
// 			int pick=0;
// 			if(arr[ind]<=sum)
// 				pick = dp[ind-1][sum-arr[ind]];

// 			dp[ind][sum] = (pick+nonpick)%mod;
// 		}
// 	}

// 	return dp[n-1][k]; 
// }
