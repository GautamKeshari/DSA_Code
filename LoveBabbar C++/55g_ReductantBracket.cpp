// https://www.codingninjas.com/codestudio/problems/redundant-brackets_975473?leftPanelTab=0&campaign=Lovebabbarcodestudio&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbarcodestudio

// #include <bits/stdc++.h> 
// bool findRedundantBrackets(string &s)
// {
//     stack<char> stack;

    
//     for(int i=0;i<s.length();i++){
//         char ch=s[i];
//         if((ch=='(')||(ch=='+')||(ch=='-')||(ch=='*')||(ch=='/')){
//             stack.push(ch);
//         }else{
//             if(ch==')'){
//                 bool isReductant=true;
//                 while(stack.top()!='('){
//                     //now we check is there any operator presnt
//                     char top=stack.top();
//                     if((top=='+')||(top=='-')||(top=='*')||(top=='/')){
//                         isReductant=false;
//                     }
//                     stack.pop();
//                 }
//                 stack.pop();
//                 if(isReductant==true){
//                     return true;
//                 }
//             }
//         }
//     }

//     return false;
// }
