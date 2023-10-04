// https://www.codingninjas.com/studio/problems/divisible-set_3754960?source=youtube&campaign=striver_dp_videos&utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_dp_videos&leftPanelTab=0
// LDS=>Logest Divisible Subsequence
// #include<bits/stdc++.h>
// vector<int> divisibleSet(vector<int> &arr)
// {
    // int n=arr.size();
    // vector<int> dp(n,1);
    // vector<int> hash(n);
    // int lastIndex=0;
    // int maxi=1;
    // sort(arr.begin(),arr.end());
    // for(int ind=0;ind<n;ind++){
    //     hash[ind]=ind;
    //     for(int prev=0;prev<ind;prev++){
    //         if(arr[ind]%arr[prev]==0 && 
    //                     1+dp[prev]>dp[ind])
    //         {
    //             dp[ind]=1+dp[prev];
    //             hash[ind]=prev;
    //         }
    //     }
    //     // Upto this hash and dp array is updates for an index i.
    //     // now ,we also have to store index of that index of dp which has max value

    //     if(dp[ind]>maxi){
    //         maxi=dp[ind];
    //         lastIndex=ind;
    //     }
    // }
    // vector<int> ans;
    // while(hash[lastIndex]!=lastIndex){
    //     ans.push_back(arr[lastIndex]);
    //     lastIndex=hash[lastIndex];
    // }
    // ans.push_back(arr[lastIndex]);
    // reverse(ans.begin(),ans.end());
    // // for(int i=0;i<ans.size();i++){
    // //     cout<<ans[i]<<" ";
    // // }
    // // cout<<endl;
    // // cout<<"Size "<<ans.size()<<endl;
    // return ans;
    
// }