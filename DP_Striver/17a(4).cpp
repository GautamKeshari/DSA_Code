// This code is wrong change according to 3rd code.

// int mod=1000000007;
// int findWays(vector<int>& arr, int k)
// {
// 	int n=arr.size();
// 	vector<int> prev(k+1,0),curr(k+1,0);
// 	prev[0]=curr[0]=1;
// 	if(arr[0]<=k) prev[arr[0]]=1;

// 	for(int ind=1;ind<n;ind++){
// 		for(int sum=1;sum<=k;sum++){
// 			int nonpick = prev[sum];
// 			int pick=0;
// 			if(arr[ind]<=sum)
// 				pick = prev[sum-arr[ind]];

// 			curr[sum] = (pick+nonpick)%mod;
// 		}
// 		prev=curr;
// 	}

// 	return prev[k]; 
// }
