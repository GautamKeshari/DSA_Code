// #include <bits/stdc++.h> 

// int frogJump(int n, vector<int> &heights)
// {
//     int prev2=0;
//     int prev=0;
//     int curr;
//     for(int i=1;i<=n-1;i++){
//         int left=prev+abs(heights[i]-heights[i-1]);
//         int right=INT_MAX;
//         if(i>1) right=prev2+abs(heights[i]-heights[i-2]);
//         curr=min(left,right);
//         prev2=prev;
//         prev=curr;
//     }

//     return curr;  // we can return prev also 
// }