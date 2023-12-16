// https://leetcode.com/problems/parsing-a-boolean-expression/

// class Solution {
//     void solve(stack<char> &st){
//         int hashtrue=0;
//         int hashfalse=0;
//         while(st.top()!='('){
//             if(st.top()=='t') hashtrue=1;
//             else if(st.top()=='f') hashfalse=1;
//             st.pop();
//         }
//         st.pop();
//         char op=st.top();
//         st.pop();
//         if(op=='|'){
//             if(hashtrue==1) st.push('t');
//             else st.push('f');
//         }else if(op=='&'){
//             if(hashfalse==1) st.push('f');
//             else st.push('t');
//         }else{
//             if(hashfalse==1) st.push('t');
//             else st.push('f');
//         }
//     }
// public:
//     bool parseBoolExpr(string exp) {
//         stack<char> st;
//         for(int i=0;i<exp.length();i++){
//             if(exp[i]!=')' && exp[i]!=','){
//                 st.push(exp[i]);
//             }else if(exp[i]==','){
//                 continue;
//             }else if(exp[i]==')'){
//                 solve(st);
//             }
//         }
//         return st.top()=='t'?true:false;
//     }
// };