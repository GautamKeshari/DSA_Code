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


