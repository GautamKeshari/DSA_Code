// https://www.codingninjas.com/codestudio/problems/next-smaller-element_1112581?topList=love-babbar-dsa-sheet-problems&leftPanelTab=0&campaign=Lovebabbarcodestudio&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbarcodestudio

// #include <bits/stdc++.h>
// #include <stack>
// vector<int> nextSmallerElement(vector<int> &arr, int n) {
//   stack<int> st;
//   st.push(-1);

//   for (int i = n - 1; i >= 0; i--) {
//     int curr = arr[i];
//     if (st.top() < curr) {
//       arr[i] = st.top();
//       st.push(curr);
//     } else {
//       // traverse until we get smaller element w.r.t. curr
//       while (st.top() >= curr) {
//         st.pop();
//       }
//       arr[i] = st.top();
//       st.push(curr);
//     }
//   }
//   return arr;
// }