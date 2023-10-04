// https://www.codingninjas.com/studio/problems/0-1-knapsack_920542?source=youtube&campaign=striver_dp_videos&utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_dp_videos

// #include <bits/stdc++.h> 

// int f(int ind,int W,vector<int> &wt, vector<int> &val){
//     if(ind==0){
//         if(wt[ind]<=W) return val[ind];
//         else return 0;
//     }
//     int nontake=f(ind-1,W,wt,val);
//     int take=INT_MIN;
//     if(wt[ind]<=W){
//         take=val[ind]+f(ind-1,W-wt[ind],wt,val);
//     }

//     return max(take,nontake);
// }

// int knapsack(vector<int> weight, vector<int> value, int n, int maxWeight) 
// {
// 	return f(n-1,maxWeight,weight,value);
// }