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
//     deque<long long >dq;
    
//     for(long long int i=0;i<k;i++){
//         if(A[i]<0){
//             dq.push_back(i);
//         }
//     }
    
//     vector<long long > ans;
    
//     if(!dq.empty()){
//         ans.push_back(A[dq.front()]);
//     }else{
//         ans.push_back(0);
//     }
    
//     //stored 1st window in dequeue
//     for(long long int i=k;i<n;i++){
//         //removal of element in dequeue
//         if(!dq.empty() && i-dq.front()>=k){
//             dq.pop_front();
//         }
//         //addition of element
//         if(A[i]<0){
//             dq.push_back(i);
//         }
        
//         //ans store in vector
//         if(dq.size()>0){
//             ans.push_back(A[dq.front()]);
//         }else{
//             ans.push_back(0);
//         }
//     }
    
//     return ans;
// }