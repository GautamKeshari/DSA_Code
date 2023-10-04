// https://www.codingninjas.com/studio/problems/longest-increasing-subsequence_630459?source=youtube&campaign=striver_dp_videos&utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_dp_videos&leftPanelTab=1

// #include<bits/stdc++.h>

// int longestIncreasingSubsequence(int arr[], int n)
// {
//     vector<int> temp;
//     temp.push_back(arr[0]);
//     for(int i=1;i<n;i++){
//         if(arr[i]>temp.back()){   //if current element greater than last element.
//             temp.push_back(arr[i]);
//         }else{
//             int ind=lower_bound(temp.begin(),temp.end(),arr[i])-temp.begin();
//             temp[ind]=arr[i];
//         }
//     }
//     return temp.size();
// }
