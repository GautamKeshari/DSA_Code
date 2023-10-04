// #include <bits/stdc++.h> 

// int countElementInStack(stack<int> &stack){
//   int cnt=0;
//   while(!stack.empty()){
//     stack.pop();
//     cnt++;
//   }
//   // cout<<cnt<<endl;
//   return cnt;
// }

// int findMinimumCost(string str) {
//   // Write your code here
//   int size=str.length();
//   stack<int> stack;

//   if(size%2!=0){
//     return -1;
//   }else{
//     //count is used for counting the total no. of operations
//     int count=0;

//     for(int i=0;i<size;i++){
//       char ch=str[i];

//       if (ch == '{') {
//         stack.push(ch);
//       } else if (ch == '}' && !stack.empty()){
//         stack.pop();
//       }else if(stack.empty() && ch == '}') {
//         stack.push('{');
//         count++;
//       } 
//       if (!stack.empty() && i==size-1){  
//         //this is the case if we reach last element of string and stack is not empty
//         int top = countElementInStack(stack);
//         return (top/2)+count;
//       }
//     }

//   return count;
    
//   }
// }