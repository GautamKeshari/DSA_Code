// class Solution {
// private:
//     bool isValid(char ch){
//         if((ch>='a' && ch<='z') || (ch>='0' && ch<='9')){
//             return true;
//         }
//         return false;
//     }

// public:
//     bool isPalindrome(string s) {
//         for(int i=0;i<s.length();i++){
//         if(s[i]>='A' && s[i]<='Z'){
//             s[i]=s[i]+'a'-'A';
//             }
//         }
//         int i=0,j=s.length()-1;
//         while(i<=j){
//             if(!isValid(s[i])) i++;
//             if(!isValid(s[j])) j--;

//             if(isValid(s[i]) && isValid(s[j])){
//                 if(s[i]!=s[j]){
//                     return false;
//                 }
//                 i++;
//                 j--;
//             }
//         }
//         return true;

//     }
// };