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

// void solve(stack<int> &stack){
//     if(stack.empty()){
//         return;
//     }

//     int num=stack.top();
//     stack.pop();

//     solve(stack);
//     pushAtBottom(stack, num);
// }

// void reverseStack(stack<int> &stack) {
//     solve(stack);  
// }

// T.C. = O(n^2);