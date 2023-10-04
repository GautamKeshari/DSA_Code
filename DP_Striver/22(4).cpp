// #include<bits/stdc++.h>
// long countWaysToMakeChange(int *denominations, int n, int value)
// {
//     int *arr=denominations;
//     vector<long> prev(value+1,0),curr(value+1,0);

//     for(int T=0;T<=value;T++){
//         prev[T]= (T%arr[0]==0);
//     }

//     for(int ind=1;ind<n;ind++){
//         for(int T=0;T<=value;T++){
//             long notTake=prev[T];
//             long take=0;
//             if(arr[ind]<=T){
//                 take=curr[T-arr[ind]];
//             }
//             curr[T]=take+notTake;
//         }
//         prev=curr;
//     }

//     return prev[value];
// }