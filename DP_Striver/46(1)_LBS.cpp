// https://www.codingninjas.com/studio/problems/longest-bitonic-sequence_1062688?source=youtube&campaign=striver_dp_videos&utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_dp_videos&leftPanelTab=1
// int longestBitonicSubsequence(vector<int>& arr, int n)
// {
// 	vector<int> dp1(n,1);
// 	for(int ind=0;ind<n;ind++){
// 		for(int prev=0;prev<ind;prev++){
// 			if(arr[ind]>arr[prev] && 1+dp1[prev]>dp1[ind]){
// 				dp1[ind]=1+dp1[prev];
// 			}
// 		}
// 	}
// 	vector<int> dp2(n,1);
// 	for(int ind=n-1;ind>=0;ind--){
// 		for(int prev=n-1;prev>ind;prev--){
// 			if(arr[ind]>arr[prev] && 1+dp2[prev]>dp2[ind]){
// 				dp2[ind]=1+dp2[prev];
// 			}
// 		}
// 	}
// 	int maxi=0;
// 	for(int i=0;i<n;i++){
// 		maxi=max(maxi,dp1[i]+dp2[i]-1);
// 	}
// 	return maxi;
// }
