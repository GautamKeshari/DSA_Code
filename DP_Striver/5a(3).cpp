// Tabulation Technique

// #include <bits/stdc++.h> 

// int maximumNonAdjacentSum(vector<int> &nums){
//     int size=nums.size();
//     int dp[size+1]={0};

//     dp[0]=nums[0];
//     for(int i=1;i<size;i++){
//         int pick=nums[i]+0;  
//         if(i>1){
//             pick+=dp[i-2];
//         }
//         int nonpick=0+dp[i-1];
//         dp[i]=max(pick,nonpick);
//     }
//     return dp[size-1];
// }