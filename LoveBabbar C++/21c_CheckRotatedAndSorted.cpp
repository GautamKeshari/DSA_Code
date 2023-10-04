// https://leetcode.com/problems/check-if-array-is-sorted-and-rotated/description/

// arr={5,4,3,2,1} => return false
// arr={3,4,5,1,2} => return true
// arr={1,2,3,4,5} => return true
// arr={3,4,5,2,1} => return false

// class Solution {
// public:
//     bool check(vector<int>& nums){
//         int size=nums.size();
//         if(size==1) return true;

//         int count=0;
        
//         for(int i=1;i<size;i++){
//             if(nums[i-1]>nums[i]){
//                 count++;
//             }
//         }
//         if(nums[size-1]>nums[0]) count++;

//         if(count <= 1){
//             return true;
//         }

//         return false;

//     }
// };