// https://practice.geeksforgeeks.org/problems/reverse-each-word-in-a-given-string1001/1

// //{ Driver Code Starts
// #include<bits/stdc++.h>
// using namespace std;

// T.C. => O(2*n)
// S.C. => O(1)

// // } Driver Code Ends
// class Solution
// {
//   public:
//     string reverseWords (string s)
//     {
//         int start=0,end=0;
//         int i=0;
//         while(i<s.length()){
//             while(s[i]!='.' && i<s.length()){
//                 end++;
//                 i++;
//             }
//             i=i+1;
//             end--;
//             while(start<=end){
//                 swap(s[start],s[end]);
//                 start++;end--;
//             }
//             start=i;
//             end=i;
            
//         }
//         return s;
//     }
// };

// //{ Driver Code Starts.
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         string s; cin >> s;
//         Solution ob;
//         cout << ob.reverseWords (s) << endl;
//     }
//     return 0;
// }

// // } Driver Code Ends