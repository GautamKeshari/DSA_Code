// #include <bits/stdc++.h> 

// int maximumNonAdjacentSum(vector<int> &nums){
//     int size=nums.size();
//     int prev=nums[0];
//     int prev2=0;
//     int curr;
//     for(int i=1;i<size;i++){
//         int pick=nums[i]+prev2;
//         int nonpick=0+prev;
//         curr=max(pick,nonpick);
//         prev2=prev;
//         prev=curr;
//     }
//     return prev;
// }