// #include <bits/stdc++.h>

// int maximumProfit(vector<int> &values, int n, int k)
// {
//     vector<int>curr (2*k+1,0);
//     vector<int>aage (2*k+1,0);
//     for(int ind=n-1;ind>=0;ind--){
//         for(int trans=0;trans<2*k;trans++){
//             int profit=0;
//             if(trans%2==0){   //if even then buy
//                 profit=max(-values[ind]+aage[trans+1],0+aage[trans]);
//             }else{
//                 profit=max(values[ind]+aage[trans+1],0+aage[trans]);
//             }
//             curr[trans]=profit;
//         }
//         aage=curr;
//     }
//     return curr[0];
// }
