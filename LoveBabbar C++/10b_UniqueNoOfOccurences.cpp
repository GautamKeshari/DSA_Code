// https://leetcode.com/problems/unique-number-of-occurrences/description/

// class Solution {
// public:
//     bool uniqueOccurrences(vector<int>& arr) {
//         unordered_map<int,int> m;
//         for(int i=0;i<arr.size();i++){
//             m[arr[i]]++;
//         }

//         unordered_map<int,int> cnt;
//         for(auto x:m){
//             int elementCount=x.second;

//             if(cnt[elementCount]>0){
//                 return false;
//             }
//             cnt[elementCount]++;
//         }
//         return true;
//     }
// };