// https://www.codingninjas.com/studio/problems/ways-to-make-coin-change_630471?source=youtube&campaign=striver_dp_videos&utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_dp_videos&leftPanelTab=0

// long f(int ind,int T,int *arr){
//     if(ind==0){
//         return (T%arr[ind] == 0);
//     }
//     long nonTake=f(ind-1,T,arr);
//     long take=0;
//     if(arr[ind]<=T){
//         take=f(ind,T-arr[ind],arr);
//     }

//     return take+nonTake;
// }

// long countWaysToMakeChange(int *denominations, int n, int value)
// {
//     return f(n-1,value,denominations);
// }