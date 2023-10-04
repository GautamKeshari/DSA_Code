// https://www.codingninjas.com/studio/problems/best-time-to-buy-and-sell-stock_1080698?source=youtube&campaign=striver_dp_videos&utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_dp_videos&leftPanelTab=0

// #include <bits/stdc++.h> 
// int maximumProfit(vector<int> &values, int n, int k)
// {
//     vector<vector<int>> curr(2,vector<int> (k+1,0));
//     vector<vector<int>> after(2,vector<int> (k+1,0));

//     for(int ind=n-1;ind>=0;ind--){
//         for(int buy=0;buy<=1;buy++){
//             for(int count=1;count<=k;count++){
//                 int profit=0;
//                 if(buy){
//                     profit=max((-values[ind] + after[0][count]), (0+after[1][count]) );    
//                 }else{
//                     profit=max((values[ind]+after[1][count-1]), (0+after[0][count]) );
//                 }
//                 curr[buy][count]=profit;
//             }
//             after=curr;
//         }
//     }
//     return curr[1][k];
// }
