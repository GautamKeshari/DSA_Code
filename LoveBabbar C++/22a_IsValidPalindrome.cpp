// https://leetcode.com/problems/valid-palindrome/submissions/

// class Solution {
// private:
//     bool isValid(char ch){
//         if((ch>='a' && ch<='z') ||(ch>='A' && ch<='Z')||(ch>='1' && ch<='9')){
//             return true;
//         }
//         return false;
//     }

//     char toLowerCase(char ch)
//     {

//         if (ch > 'A' && ch < 'Z')
//         {
//             ch = ch - 'A' + 'a';
//         }
//         return ch;
//     }

//     bool checkPalindrome(string temp)
// {
//     int n=temp.length();
//     int s = 0;
//     int e = n - 1;
//     while (s <= e)
//     {
        
//             if (temp[s] == temp[e])
//             {
//                 s++;
//                 e--;
//             }
//             else
//             {
//                 return 0;
//             }
//         }
    
//     return 1;
// }

// public:
//     bool isPalindrome(string s) {
        

//         //remove invalid character
//         string temp;
//         for(int i=0;i<s.length();i++){
//             if(isValid(s[i])){
//                 temp.push_back(s[i]);
//             }
//         }

//         //invalid character removed not we have to convert uppercase to lowercase letter
        
//         for(int i=0;i<temp.length();i++){
//             temp[i]=toLowerCase(temp[i]);    
//         }
//         // cout<<temp<<endl;

//         return checkPalindrome(temp);
//         // return 0;
//     }
// };