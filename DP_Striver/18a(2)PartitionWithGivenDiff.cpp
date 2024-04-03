// https://www.codingninjas.com/studio/problems/partitions-with-given-difference_3751628?source=youtube&campaign=striver_dp_videos&utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_dp_videos
// #include <bits/stdc++.h> 
// int mod=(int)(1e9+7);
// int countWays(vector<int>& arr, int sum,int ind,vector<vector<int>> &dp){
// 	// base case
// 	if(ind==0){
// 		if(sum==0 && arr[0]==0) return 2;
// 		if(sum==0 || arr[0]==sum) return 1;
// 		return 0;
// 	}

// 	if(dp[ind][sum]!=-1) return dp[ind][sum];

// 	int nonpick = countWays(arr,sum,ind-1,dp);
// 	int pick=0;
// 	if(arr[ind]<=sum)
// 		pick = countWays(arr,sum-arr[ind],ind-1,dp);

// 	return dp[ind][sum] = (pick+nonpick)%mod;
// }

// int findWays(vector<int>& arr, int k)
// {
// 	int n=arr.size();
// 	vector<vector<int>>dp(n,vector<int>(k+1,-1));
// 	int ans=countWays(arr,k,n-1,dp);
// 	return ans; 
// }

// int countPartitions(int n, int d, vector<int> &arr) {
//     int totalSum=0;
//     for(auto &it:arr) totalSum+=it;
//     if((totalSum-d<0) || (totalSum-d)%2) return false;

//     return findWays(arr,(totalSum-d)/2);
// }