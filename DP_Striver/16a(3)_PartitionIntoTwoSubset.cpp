// https://www.codingninjas.com/studio/problems/partition-a-set-into-two-subsets-such-that-the-difference-of-subset-sums-is-minimum_842494?source=youtube&campaign=striver_dp_videos&utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_dp_videos&leftPanelTab=0

// #include <bits/stdc++.h> 
// int minSubsetSumDifference(vector<int>& arr, int n)
// {
// 	int totalsum=0;
// 	for(int i=0;i<n;i++) totalsum+=arr[i];

// 	int k=totalsum;
// 	vector<vector<bool>> dp(n,vector<bool>(k+1,0));
//     //base case
//     for(int i=0;i<n;i++){
//         dp[i][0]=true;
//     }
//     if(arr[0]<=k) dp[0][arr[0]]=true;

//     // Form the nested loop
//     for(int ind=1;ind<n;ind++){
//         for(int target=1;target<=k;target++){

//             bool take=false;
//             if(arr[ind]<=target) take=dp[ind-1][target-arr[ind]];

//             bool nottake= dp[ind-1][target];

//             dp[ind][target]= take||nottake;
//         }
//     }
	

//     // dp[n-1][col= 0.....totalsum]
// 	int mini=(int)1e9;
// 	for(int i=0;i<=totalsum/2;i++){
// 		if(dp[n-1][i]){
// 			int s1=i, s2=totalsum-i;
// 			mini=min(mini,abs(s2-s1));
// 		}
// 	}
// 	return mini;

// }
