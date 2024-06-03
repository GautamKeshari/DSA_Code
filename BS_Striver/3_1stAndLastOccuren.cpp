// https://www.naukri.com/code360/problems/first-and-last-position-of-an-element-in-sorted-array_1082549?utm_source=youtube&utm_medium=affiliate&utm_campaign=codestudio_Striver_BinarySeries&leftPanelTabValue=SUBMISSION

// #include<bits/stdc++.h>
// pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
// {
//     pair<int,int> ans={-1,-1};
//     int first=lower_bound(arr.begin(),arr.end(),k)-arr.begin();
//     if(arr[first]==k) ans.first=first;
//     int second=upper_bound(arr.begin(),arr.end(),k)-arr.begin();
//     if(arr[second-1]==k) ans.second=second-1;
//     return ans;
// }
