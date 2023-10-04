// https://www.codingninjas.com/codestudio/problems/valid-parenthesis_795104?topList=love-babbar-dsa-sheet-problems&leftPanelTab=0%3Fsource%3Dyoutube&campaign=Lovebabbarcodestudio&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbarcodestudio

// bool isValidParenthesis(string expression)
// {
//     stack<char> st;

//     for(int i=0;i<expression.length();i++){
//         char ch=expression[i];
//         if(ch=='[' || ch=='{' || ch=='('){
//             st.push(ch);
//         }else{
//           if (!st.empty()) {
//             char top = st.top();
//             if ((ch == '}' && top == '{') || (ch == ']' && top == '[') ||
//                 (ch == ')' && top == '(')) {
//               st.pop();
//             } else {
//               return false;
//             }
//           } else {
//             return false;
//           }
//         }
//     }
//     // It may be possible that stack is empty after all element is matched then it is also corect 
//     if(st.empty()){
//         return true;
//     }else{
//         return false;
//     }
    
// }