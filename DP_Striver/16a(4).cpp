// #include <bits/stdc++.h> 
// int minSubsetSumDifference(vector<int>& arr, int n)
// {
// 	int totalsum=0;
// 	for(int i=0;i<n;i++) totalsum+=arr[i];

// 	int k=totalsum;
// 	vector<bool> prev(k+1,0),curr(k+1,0);
//     //base case
//     prev[0]=curr[0]=true;
//     prev[arr[0]]=true;

//     // Form the nested loop
//     for(int ind=1;ind<n;ind++){
//         for(int target=1;target<=k;target++){

//             bool take=false;
//             if(arr[ind]<=target) take=prev[target-arr[ind]];

//             bool nottake= prev[target];

//             curr[target]= take||nottake;
//         }
//         prev=curr;
//     }
	

//     // dp[n-1][col= 0.....totalsum]
// 	int mini=(int)1e9;
// 	for(int i=0;i<=totalsum/2;i++){
// 		if(prev[i]){
// 			int s1=i, s2=totalsum-i;
// 			mini=min(mini,abs(s2-s1));
// 		}
// 	}
// 	return mini;

// }
