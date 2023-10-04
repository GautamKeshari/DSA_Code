// https://www.codingninjas.com/studio/problems/aggressive-cows_1082559

// #include<bits/stdc++.h>

// bool canWePlace(vector<int> &stalls,int dist,int cows){
//     int countCows=1; int last=stalls[0];
//     for(int i=1;i<stalls.size();i++){
//         if(stalls[i]-last >= dist){
//             countCows++;
//             last=stalls[i];
//         }
//         if(countCows >= cows) return true;
//     }

//     return false;
// }

// int aggressiveCows(vector<int> &stalls, int k)
// {
//     sort(stalls.begin(),stalls.end());
//     int n=stalls.size();
//     int low=1;
//     int high=stalls[n-1]-stalls[0];
//     int ans;
//     while(low<=high){
//         int mid=(low+high)/2;
//         if(canWePlace(stalls,mid,k)){
//             ans=low;
//             low=mid+1;
//         }else{
//             high=mid-1;
//         }
//     }
//     return ans;
//     //we can also return high ,which is also considered as a answer. 
// }