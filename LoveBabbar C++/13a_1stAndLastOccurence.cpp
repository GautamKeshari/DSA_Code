// https://www.codingninjas.com/codestudio/problems/first-and-last-position-of-an-element-in-sorted-array_1082549?source=youtube&campaign=love_babbar_codestudio2&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio2&leftPanelTab=0

// #include <bits/stdc++.h> 
// pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
// {
//     int x=-1,y=-1;
//     int i=0;
//     while(i<n){
//         if(arr[i]==k){
//             if (x == -1) {
//                 x = i;y=i;
//             }
//             if(i+1<n && arr[i+1]==k){
//                 y=i+1;
//             }else{
//                 break;
//             }
//         }
//         i++;
//     }
//     pair<int,int> ans=make_pair(x,y);
//     return ans;
// }