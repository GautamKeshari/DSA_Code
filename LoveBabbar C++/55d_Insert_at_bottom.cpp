// https://www.codingninjas.com/codestudio/problems/insert-an-element-at-its-bottom-in-a-given-stack_1171166?topList=love-babbar-dsa-sheet-problems&leftPanelTab=0%3Fsource%3Dyoutube&campaign=Lovebabbarcodestudio&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbarcodestudio


// #include <bits/stdc++.h> 

// void solve(stack<int>& myStack, int x){
//     if(myStack.empty()){
//         myStack.push(x);
//         return;
//     }

//     int num=myStack.top();
//     myStack.pop();

//     solve(myStack,x);

//     myStack.push(num);
// }

// stack<int> pushAtBottom(stack<int>& myStack,int x) 
// {
//     solve(myStack,x);

//     return myStack;
// }




// THIS BELOW CODE WILL SHOW RUNTIME ERROR,SO FROM THIS WE SAY THAT DON'T TRY TO SOLVE THE QUESTION BY RECURSION IN THE SAME GIVEN FUNCTION.


// #include <bits/stdc++.h> 
// stack<int> pushAtBottom(stack<int>& myStack, int x) 
// {
//     if(myStack.empty()){
//         myStack.push(x);
//         return myStack;
//     }

//     int element=myStack.top();
//     myStack.pop();

//     pushAtBottom(myStack,x);

//     myStack.push(element);
// }

