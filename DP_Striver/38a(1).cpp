// #include <bits/stdc++.h>
// // if we consider buy and sell for each transaction ,then total transaction is 2*k
// int f(int ind,int trans,vector<int> &values,int n,int k){
//     if(ind==n || trans==2*k) return 0;

//     int profit=0;
//     if(trans%2==0){    //buy
//         profit=max(-values[ind]+f(ind+1,trans+1,values,n,k), 0+f(ind+1,trans,values,n,k));
//     }else{             //sell
//         profit=max(values[ind]+f(ind+1,trans+1,values,n,k), 0+f(ind+1,trans,values,n,k));
//     }
//     return profit;
// }

// int maximumProfit(vector<int> &values, int n, int k)
// {
//     // vector<vector<int>> dp(n+1,vector<int>(2*k+1,0));
//     return f(0,0,values,n,k);
// }
