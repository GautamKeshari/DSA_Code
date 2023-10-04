// https://www.codingninjas.com/studio/problems/rahul-and-his-chocolates_3118974?source=youtube&campaign=striver_dp_videos&utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_dp_videos

// int f(int ind,int buy,vector<int> &prices,int n,int fee){
//     if(ind==n) return 0;
//     int profit=0;
//     if(buy){
//         profit=max((-prices[ind] + f(ind+1,0,prices,n,fee)), 0+f(ind+1,1,prices,n,fee) );    
//     }else{
//         profit=max((prices[ind]-fee) + f(ind+1,1,prices,n,fee), 0+f(ind+1,0,prices,n,fee) );
//     }
//     return profit;
// }

// int maximumProfit(vector<int> &prices, int n, int fee)
// {
// 	return f(0,1,prices,n,fee);
// }