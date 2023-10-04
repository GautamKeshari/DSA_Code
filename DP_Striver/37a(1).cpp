// T.C. =O(n*4)
// S.C. =O(n)

// int f(int ind,int trans,vector<int> &values,int n){
//     // trans => transaction
//     if(ind==n || trans==4){
//         return 0;
//     }

//     int profit=0;
//     if(trans%2==0){   //if even then buy
//         profit=max(-values[ind]+f(ind+1,trans+1,values,n),0+f(ind+1,trans,values,n));
//     }else{
//         profit=max(values[ind]+f(ind+1,trans+1,values,n),0+f(ind+1,trans,values,n));
//     }
//     return profit;
// }

// int maxProfit(vector<int>& values){
//     int n=values.size();
//     return f(0,0,values,n);
// }
