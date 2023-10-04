// https://leetcode.com/problems/peak-index-in-a-mountain-array/description/wha

// class Solution {
// public:
//     int peakIndexInMountainArray(vector<int>& arr) {
//         int ans=-1;
//         int s=0,e=arr.size()-1;
//         while(s<e){
//             int mid=s+(e-s)/2;

//             if(arr[mid+1]>arr[mid] ){
//                 s=mid+1;
//             }else if(arr[mid+1]<arr[mid] ){
//                 e=mid;
//                 ans=mid;
//             }
//         }
//         return ans;
//     }
// };