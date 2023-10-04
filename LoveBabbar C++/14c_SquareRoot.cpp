// https://leetcode.com/problems/sqrtx/submissions/

// class Solution {
// public:
    // int mySqrt(int x) {
    //     int s=0;
    //     int e=x;
    //     long long int ans=0;

    //     while(s<=e){
    //         long long int mid=s+(e-s)/2;

    //         if(mid*mid==x){
    //             return mid;
    //         }else if(mid*mid > x){
    //             e=mid-1;
    //         }else{
    //             s=mid+1;
    //             ans=mid;  //here maybe start is a answer  ****
    //         }
    //     }
    //     return ans;
        
    // }
// };