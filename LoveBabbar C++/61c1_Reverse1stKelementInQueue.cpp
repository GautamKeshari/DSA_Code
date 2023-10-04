// https://practice.geeksforgeeks.org/problems/reverse-first-k-elements-of-queue/1

// //{ Driver Code Starts
// // Initial Template for C++

// #include <bits/stdc++.h>
// using namespace std;
// queue<int> modifyQueue(queue<int> q, int k);
// int main() {
//     int t;
//     cin >> t;
//     while (t-- > 0) {
//         int n, k;
//         cin >> n >> k;
//         queue<int> q;
//         while (n-- > 0) {
//             int a;
//             cin >> a;
//             q.push(a);
//         }
//         queue<int> ans = modifyQueue(q, k);
//         while (!ans.empty()) {
//             int a = ans.front();
//             ans.pop();
//             cout << a << " ";
//         }
//         cout << endl;
//     }
// }
// // } Driver Code Ends



// // T.C. => O(n)
// // S.C. => O(k)
// // User function Template for C++

// // Function to reverse first k elements of a queue.
// queue<int> modifyQueue(queue<int> q, int k) {
//     int size=q.size();
    
//     stack<int> s;
    
//     //1st store starting k element in stack
//     for(int i=0;i<k;i++){
//         s.push(q.front());
//         q.pop();
//     }
    
//     //Now pop all element from stack and pushing them in queue
//     for(int i=0;i<k;i++){
//         int x=s.top();
//         q.push(x);
//         s.pop();
//     }
    
//     for(int i=k;i<size;i++){
//         int x=q.front();
//         q.pop();
//         q.push(x);
//     }
    
//     return q;
// }



// Using recursion we can reduce T.C. to O(1).