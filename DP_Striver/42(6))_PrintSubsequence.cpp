// #include<bits/stdc++.h>

// int longestIncreasingSubsequence(int arr[], int n)
// {
//     vector<int> dp(n,1);       //because every element is initially consist of 1 size subsequence
//     vector<int> hash(n);
//     int lastIndex=0;
//     int maxi=1;
//     for(int ind=0;ind<n;ind++){
//         hash[ind]=ind;
//         for(int prev=0;prev<ind;prev++){
//             if(arr[prev]<arr[ind] && 
//                         1+dp[prev]>dp[ind])
//             {
//                 dp[ind]=1+dp[prev];
//                 hash[ind]=prev;
//             }
//         }
//         // Upto this hash and dp array is updates for an index i.
//         // now ,we also have to store index of that index of dp which has max value

//         if(dp[ind]>maxi){
//             maxi=dp[ind];
//             lastIndex=ind;
//         }
//     }
//     vector<int> ans;
//     while(hash[lastIndex]!=lastIndex){
//         ans.push_back(arr[lastIndex]);
//         lastIndex=hash[lastIndex];
//     }
//     ans.push_back(arr[lastIndex]);
//     reverse(ans.begin(),ans.end());
//     for(int i=0;i<ans.size();i++){
//         cout<<ans[i]<<" ";
//     }
//     cout<<endl;
//     return maxi;
// }
