// https://www.codingninjas.com/studio/problems/house-robber_839733?leftPanelTab=0

// #include <bits/stdc++.h> 

// long long int maximumNonAdjacentSum(vector<long long int> &nums){
//     int size=nums.size();
//     long long int prev=nums[0];
//     long long int prev2=0;
//     long long int curr;
//     for(int i=1;i<size;i++){
//         long long int pick=nums[i]+prev2;
//         long long int nonpick=0+prev;
//         curr=max(pick,nonpick);
//         prev2=prev;
//         prev=curr;
//     }
//     return prev;
// }

// long long int houseRobber(vector<int>& houses)
// {
//     long long int n=houses.size();
//     vector<long long int>temp1,temp2;
//     if(n==1) return houses[0];
//     for(int i=0;i<n;i++){
//         if(i!=0) temp2.push_back(houses[i]);
//         if(i!=n-1) temp1.push_back(houses[i]);
//     }
//     return max(maximumNonAdjacentSum(temp1),maximumNonAdjacentSum(temp2));
// }