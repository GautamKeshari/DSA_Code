// https://leetcode.com/problems/rotate-array/description/

// class Solution {
// public:
//     void rotate(vector<int>& nums, int k) {

//         k=k%nums.size();
//         reverse(nums.begin()+(nums.size()-k),nums.end());       // i=n-k to (n+1)-1
//         reverse((nums.begin()),(nums.begin() + (nums.size()-k)) );  // i=0 to i=0+(n-k-1) 
//         reverse(nums.begin(),nums.end());
//     }
// };