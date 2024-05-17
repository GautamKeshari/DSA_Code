// https://www.codingninjas.com/studio/problems/partition-equal-subset-sum_892980?source=youtube&campaign=striver_dp_videos&utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_dp_videos&leftPanelTab=1

// #include <bits/stdc++.h>

// bool subsetSumToK(int n, int k, vector<int> &arr) {
    
//     vector<bool> prev(k+1,0),curr(k+1,0);
//     //base case
//     prev[0]=curr[0]=true;
//     if(arr[0]<=k) prev[arr[0]]=true;

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
//     return prev[k];
// }


// bool canPartition(vector<int> &arr, int n)
// {
// 	int sum=0;
// 	for(int i=0;i<n;i++) sum+=arr[i];

// 	if(sum & 1) return false;
// 	else{
// 		return subsetSumToK(n,sum/2,arr);
// 	}
// }