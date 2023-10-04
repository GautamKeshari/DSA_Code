// https://practice.geeksforgeeks.org/problems/first-negative-integer-in-every-window-of-size-k3345/1


// //{ Driver Code Starts
// #include <bits/stdc++.h>
// using namespace std;

// vector<long long> printFirstNegativeInteger(long long int arr[],
//                                              long long int n, long long int k);

// // Driver program to test above functions
// int main() {
//     long long int t, i;
//     cin >> t;
//     while (t--) {
//         long long int n;
//         cin >> n;
//         long long int arr[n];
//         for (i = 0; i < n; i++) {
//             cin >> arr[i];
//         }
//         long long int k;
//         cin >> k;

//         vector<long long> ans = printFirstNegativeInteger(arr, n, k);
//         for (auto it : ans) cout << it << " ";
//         cout << endl;
//     }
//     return 0;
// }

// // } Driver Code Ends


// vector<long long> printFirstNegativeInteger(long long int A[],
//                                              long long int n, long long int k) 
// {
//     vector<long long >ans;
//     long long int first=0,second=k-1;
    
//     for(long long int i=k-1;i<n;i++){
//         // if we get first element as negative
//         second=i;
        
//         if((second-first) ==k){
//             first++;   
//         }
        
//         if(A[first]<0 && (second-first)<k){
//             ans.push_back(A[first]);
//         }else{
//             while(first<second && A[first]>=0){
//                 first++;
//             }
//             if(A[first]<0){
//                 ans.push_back(A[first]);
//             }else{
//                 ans.push_back(0);
//             }
//         }
//     }
//     return ans;
// }