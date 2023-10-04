// https://www.codingninjas.com/studio/problems/number-of-subsets_3952532?source=youtube&campaign=striver_dp_videos&utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_dp_videos&leftPanelTab=0

// int countWays(vector<int>& arr, int k,int ind){
// 	// base case
// 	if(k==0) return 1;
// 	if(ind==0){
// 		return (arr[0]==k);
// 	}

// 	int nonpick = countWays(arr,k,ind-1);
// 	int pick=0;
// 	if(arr[ind]<=k)
// 		pick = countWays(arr,k-arr[ind],ind-1);

// 	return pick+nonpick;
// }

// int findWays(vector<int>& arr, int k)
// {
// 	int n=arr.size();

// 	int ans=countWays(arr,k,n-1);
// 	return ans; 
// }
