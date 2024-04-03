// class Solution {
// public:
//     int maxSumAfterPartitioning(vector<int>& arr, int k){
//         int n=arr.size();
//         vector<int> dp(n+1,0);
//         dp[n]=0;
//         for(int i=n-1;i>=0;i--){
//             int len=0;
//             int maxiSum=INT_MIN;
//             int maxi=INT_MIN;  
//             for(int j=i;j<min(i+k,n);j++){ 
//                 len++;
//                 maxi=max(maxi,arr[j]);
//                 maxiSum=max(maxiSum,(maxi*len)+dp[j+1]);         
//             }
//             dp[i]=maxiSum;
//         }
//         return dp[0];
        
//     }
// };