// https://leetcode.com/problems/letter-combinations-of-a-phone-number/description/

// class Solution {
// private:
// void solve(string digits,vector<string>& ans,int index,int size,string mapping[],string output){
//     // base case
//     if(index >= size){
//         ans.push_back(output);
//         return;
//     }

//     int number=digits[index]-'0';
//     string value=mapping[number];
//     for(int i=0;i<value.size();i++){
//         output.push_back(value[i]);
//         solve(digits,ans,index+1,size,mapping,output);
//         output.pop_back();  If we not pop then resut for "def" is "d","de","def", but we want only "d","e","f".  
//     }
// }

// public:
//     vector<string> letterCombinations(string digits) {
//         vector<string> ans;
//         if(digits.length()==0){
//             return ans;
//         }

//         string output="";
//         int index=0;
//         int size=digits.size();
//         string mapping[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
//         solve(digits,ans,index,size,mapping,output);
//         return ans;

//     }
// };