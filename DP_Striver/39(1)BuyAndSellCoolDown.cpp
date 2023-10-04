// https://www.codingninjas.com/studio/problems/highway-billboards_3125969?source=youtube&campaign=striver_dp_videos&utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_dp_videos&leftPanelTab=1

// int f(int ind,int buy,vector<int> &prices,int n){
//     if(ind==n || ind==n+1) return 0;
//     int profit=0;
//     if(buy){
//         profit=max( (-prices[ind] + f(ind+1,0,prices,n)), (0+f(ind+1,1,prices,n)) );    
//     }else{
//         profit=max( (prices[ind]+f(ind+2,1,prices,n)), (0+f(ind+1,0,prices,n)) );
//     }
//     return profit;
// }

// int stockProfit(vector<int> &prices){
//     int n=prices.size();
//     return f(0,1,prices,n);
// }