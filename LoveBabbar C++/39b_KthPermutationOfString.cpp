// https://leetcode.com/problems/permutation-sequence/

// T.C. =O(n^2) because erase function also takes O(n) time.
// S.C. =O(n)

// class Solution {
// public:
//     string getPermutation(int n, int k) {
//         int fact=1;
//         vector<int>number;
//         for(int i=1;i<n;i++){
//             fact=fact*i;
//             number.push_back(i);
//         }
//         number.push_back(n);   //number[]={1,2,3......n}
//         string ans="";
//         k=k-1; //beacuse we are working on [0] base indexing
//         while(true){
//             ans=ans + to_string(number[k/fact]);
//             number.erase(number.begin() + (k/fact));

//             if(number.size()==0){     // we use num.size()==0 here, because at last only one element left in number ,so we just add it in the string.
//                 break;
//             }

//             k=k % fact;
//             fact=fact / number.size();
//         }
//         return ans;
//     }
// };