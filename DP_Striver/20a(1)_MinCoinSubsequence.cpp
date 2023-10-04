// https://www.codingninjas.com/studio/problems/minimum-elements_3843091?leftPanelTab=0&campaign=striver_dpseries&utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_dpseries

// #include <bits/stdc++.h>

// int f(int ind,vector<int> &num,int target){
//     if(ind==0){
//         if((target%num[ind])==0) return target/num[ind]; 
//         return 1e9;
//     }
    
//     int nottake=0+f(ind-1,num,target);
//     int take=1e9;
//     if(num[ind]<=target){
//         take=1+f(ind,num,target-num[ind]);
//     }
//     return min(take,nottake);
// }

// int minimumElements(vector<int> &num, int x)
// {
//     int ans= f(num.size()-1,num,x);
//     if(ans>=1e9) return -1;
//     return ans;
// }