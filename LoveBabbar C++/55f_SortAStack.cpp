// https://www.codingninjas.com/codestudio/problems/sort-a-stack_985275?topList=love-babbar-dsa-sheet-problems&leftPanelTab=0&campaign=Lovebabbarcodestudio&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbarcodestudio

// #include <bits/stdc++.h>

// void putElementRightPosition(stack<int> &stack,int num){

// 	if(stack.empty() || (!stack.empty() &&(stack.top()<num))){
// 		stack.push(num);
// 		return;
// 	}

// 	int n=stack.top();
// 	stack.pop();

// 	//recursive call
// 	putElementRightPosition(stack,num);
// 	stack.push(n);

// }

// void solve(stack<int> &stack){
// 	if(stack.empty()){
// 		return;
// 	}
// 	int num=stack.top();
// 	stack.pop();

// 	solve(stack);

// 	putElementRightPosition(stack,num);

// }

// void sortStack(stack<int> &stack)
// {
// 	// Write your code here
// 	solve(stack);
// }