// https://practice.geeksforgeeks.org/problems/maximum-occuring-character-1587115620/1

// //{ Driver Code Starts
// #include<bits/stdc++.h>
// using namespace std;


// // } Driver Code Ends


// class Solution
// {
//     public:
//     //Function to find the maximum occurring character in a string.
//     char getMaxOccuringChar(string str)
//     {
//         int arr[26]={0};
//         for(int i=0;i<str.length();i++){
//             int ch=str[i]-'a';
//             arr[ch]+=1;
//         }
//         int max=INT_MIN;
//         int ans;
//         for(int i=0;i<26;i++){
//             if(arr[i]>max){
//                 max=arr[i];
//                 ans=i;
//             }
//         }
//         char c=ans+'a';
//         return c;
//     }

// };

// //{ Driver Code Starts.

// int main()
// {
   
//     int t;
//     cin >> t;
//     while(t--)
//     {
//         string str;
//         cin >> str;
//     	Solution obj;
//         cout<< obj.getMaxOccuringChar(str)<<endl;
//     }
// }
// // } Driver Code Ends