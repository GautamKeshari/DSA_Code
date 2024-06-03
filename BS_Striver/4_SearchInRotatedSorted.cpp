// https://www.naukri.com/code360/problems/search-in-rotated-sorted-array_1082554?utm_source=youtube&utm_medium=affiliate&utm_campaign=codestudio_Striver_BinarySeries&leftPanelTabValue=PROBLEM

// int binary_search(vector<int> &arr,int s,int e,int key){
//     while(s<=e){
//         int mid=s+(e-s)/2;
//         if(arr[mid]==key) return mid;
//         else if(arr[mid]>key){
//             e=mid-1;
//         }else{
//             s=mid+1;
//         }
//     }
//     return -1;
// }

// int search(vector<int>& arr, int n, int k)
// {
//     int s=0,e=n-1;
//     int x=arr[0];
//     int incInd=0;
//     while(s<=e){
//         int mid=s+(e-s)/2;
//         if(arr[mid]<x){
//             incInd=mid;
//             e=mid-1;
//         }else{
//             s=mid+1;
//         }
//     }
//     int ans=0;
//     if(k>=arr[incInd] && k<=arr[n-1]){
//         ans=binary_search(arr,incInd,n-1,k);
//     }else{
//         ans=binary_search(arr,0,incInd-1,k);
//     }
//     return ans;
// }
