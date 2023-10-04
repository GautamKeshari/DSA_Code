// #include<bits/stdc++.h>

// long getMaximumProfit(long *values, int n)
// {
//     vector<long> piche(2,0),aage(2,0);
//     aage[0]=aage[1]=0;
//     for(int ind=n-1;ind>=0;ind--){
//         for(int buy=1;buy>=0;buy--){
//             long profit=0;
//             if(buy){
//                 profit=max((-values[ind] + aage[0]), (0+aage[1]));    
//             }else{
//                 profit=max((values[ind]+aage[1]), (0+aage[0]));
//             }
//             piche[buy]=profit;
//         }
//         aage=piche;
//     }
//     return piche[1];   // not take dp[0][0],because intially we can't sell the stock without buying
// }