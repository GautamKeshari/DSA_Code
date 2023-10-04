// #include <bits/stdc++.h> 
// pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
// {
//     bool flag=false;
//     int s=0,e=n-1;
//     while(s<=e){
//         if(arr[s]<k && arr[e]>k){
//             s++;e--;
//         }else if(arr[s]<k){
//             s++;
//         }else if(arr[e]>k){
//             e--;
//         }else{
//             flag=true;
//             break;
//         }
//     }
//     pair<int,int> ans=make_pair(-1,-1);
//     if(flag==true){
//         ans.first=s;
//         ans.second=e;
//     }
//     return ans;
// }