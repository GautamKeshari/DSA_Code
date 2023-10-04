// https://www.codingninjas.com/studio/problems/count-ways-to-reach-nth-stairs_798650?leftPanelTab=0

// #include <bits/stdc++.h> 
// #define MOD 1000000007
// int countDistinctWays(int n) {

//     if(n==0 || n==1) return 1;
//     int curr;
//     int prev2=1,prev=1;
//     for(int i=2;i<=n;i++){
//         curr=(prev+prev2)%MOD;
//         prev2=prev;
//         prev=curr;
//     }
//     return curr;
// }