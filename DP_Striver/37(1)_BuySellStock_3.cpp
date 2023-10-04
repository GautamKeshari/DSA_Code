// https://www.codingninjas.com/studio/problems/buy-and-sell-stock_1071012?source=youtube&campaign=striver_dp_videos&utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_dp_videos&leftPanelTab=0

// int f(int ind,int buy,vector<int> values,int n,int count){
//     if(count==0) return 0;
//     if(ind==n) return 0;
//     int profit=0;
//     if(buy){
//         profit=max( (-values[ind] + f(ind+1,0,values,n,count)), (0+f(ind+1,1,values,n,count)) );    
//     }else{
//         profit=max( (values[ind]+f(ind+1,1,values,n, count-1)), (0+f(ind+1,0,values,n,count)) );
//     }
//     return profit;
// }

// int maxProfit(vector<int>& prices){
//     int n=prices.size();
//     return f(0,1,prices,n,2);
// }





