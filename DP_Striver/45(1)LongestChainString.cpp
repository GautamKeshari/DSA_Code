// https://www.codingninjas.com/studio/problems/longest-string-chain_3752111?source=youtube&campaign=striver_dp_videos&utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_dp_videos&leftPanelTab=0

// #include<bits/stdc++.h>

// bool checkPossible(string &s1,string &s2){
//     if(s1.size()-s2.size() != 1) return false;

//     int first=0,second=0;
//     while(first<s1.size()){
//         if(s1[first]==s2[second]){
//             first++; second++;
//         }else{
//             first++;
//         }
//     }
//     if(first==s1.size() && second==s2.size()) return true;
//     return false;
// }

// bool comp(string &s1,string &s2){
//     return s1.size()<s2.size();
// }

// int longestStrChain(vector<string> &arr){
//     int n=arr.size();
//     sort(arr.begin(),arr.end(),comp);
//     vector<int> dp(n,1);
//     int maxi=1;
//     for(int ind=1;ind<n;ind++){
//         for(int prev=0;prev<ind;prev++){
//             if(checkPossible(arr[ind],arr[prev]) && 1+dp[prev]>dp[ind])
//             {
//                 dp[ind]=1+dp[prev];
//             }
//         }
//         maxi=max(maxi,dp[ind]);
//     }
//     return maxi;
// }