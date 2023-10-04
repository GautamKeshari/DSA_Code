// https://www.codingninjas.com/studio/problems/subset-sum-equal-to-k_1550954?leftPanelTab=1&campaign=striver_dp_videos&utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_dp_videos

// #include <bits/stdc++.h>

// bool f(int ind, int target, vector<int> &arr){
//     if(target==0) return true;
//     if(ind==0) return (arr[0]==target);

//     bool take=false;
//     if(arr[ind]<=target) take=f(ind-1,target-arr[ind],arr);

//     bool nottake= f(ind-1,target,arr);

//     return take||nottake;
// }

// bool subsetSumToK(int n, int k, vector<int> &arr) {
//     return f(n-1,k,arr);
// }