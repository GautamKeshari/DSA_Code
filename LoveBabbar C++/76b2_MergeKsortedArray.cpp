// https://practice.geeksforgeeks.org/batch/cip-1/track/P100-Heap/problem/merge-k-sorted-arrays

// //{ Driver Code Starts
// //Initial Template for C++

// #include<bits/stdc++.h>
// #define N 105
// using namespace std;
// void printArray(vector<int> arr, int size)
// {
// for (int i=0; i < size; i++)
// 	cout << arr[i] << " ";
// }


// // } Driver Code Ends
// //User function Template for C++


// class Solution
// {
//     public:
//     // Function to merge 2 sorted array
//     vector<int> merge2Arrays(vector<int>arr1, vector<int> arr2)
//     {
//         vector<int> ans;
        
//         int n1=arr1.size();
//         int n2=arr2.size();
        
//         int i=0,j=0;
//         while(i<n1 && j<n2){
//             if(arr1[i]<arr2[j]){
//                 ans.push_back(arr1[i++]);
//             }else{
//                 ans.push_back(arr2[j++]);
//             }
//         }
        
//         while(i<n1){
//             ans.push_back(arr1[i++]);
//         }
        
//         while(j<n2){
//             ans.push_back(arr2[j++]);
//         }
        
//         return ans;
//     }
    
//     vector<int> solve(vector<vector<int>> arr,int start,
//                         int end,int K)
//     {
//         //if size of array become one
//         if(start== end){
//             return arr[start];
//         }
        
//         // if size of array is two
//         if(end-start == 1){
//             return merge2Arrays(arr[start],arr[end]);
//         }
        
//         // if size of array is greater than 2
//         if(end-start > 1){
//             vector<int> left=solve(arr,start,(start+end)/2,K);
//             vector<int> right=solve(arr,((start+end)/2)+1,end,K);
            
//             return merge2Arrays(left,right);   
//         }
        
//     }
    
//     //Function to merge k sorted arrays.
//     vector<int> mergeKArrays(vector<vector<int>> arr, int K)
//     {
//         // int size=arr.size();
        
//         return solve(arr,0,K-1,K);
//     }
// };

// //{ Driver Code Starts.

// int main()
// {
// 	int t;
// 	cin>>t;
// 	while(t--){
// 	    int k;
// 	    cin>>k;
// 	    vector<vector<int>> arr(k, vector<int> (k, 0));
// 	    for(int i=0; i<k; i++){
// 	        for(int j=0; j<k; j++)
// 	        {
// 	            cin>>arr[i][j];
// 	        }
// 	    }
// 	    Solution obj;
//     	vector<int> output = obj.mergeKArrays(arr, k);
//     	printArray(output, k*k);
//     	cout<<endl;
//     }
// 	return 0;
// }






// // } Driver Code Ends