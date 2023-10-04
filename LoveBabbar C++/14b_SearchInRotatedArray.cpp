// https://practice.geeksforgeeks.org/problems/search-in-a-rotated-array4618/1

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

// arr[pivot] <= key <=arr[n-1]        ******
// arr[0] <= key <arr[pivot]           ******

// Expected Time Complexity: O(log N).
// Expected Auxiliary Space: O(1).

class Solution{
private:
int binarySearch(int arr[], int start,int end, int key) {

    int mid = start + (end-start)/2;

    while(start <= end) {

        if(arr[mid] == key) {
            return mid;
        }

        //go to right wala part
        if(key > arr[mid]) {
            start = mid + 1;
        }
        else{ //key < arr[mid]
            end = mid - 1;
        }

        mid = start + (end-start)/2;
    }
    
    return -1;
}

int pivotIndex(int arr[],int n){
    int s=0,e=n-1;
    int ans=arr[n-1];

    while(s<e){
        int mid=s+(e-s)/2;

        if(arr[mid]<arr[n-1]){
            e=mid;
            ans=mid;
        }
        if(arr[mid]>=arr[0]){
            s=mid+1;
            ans=mid+1;
        }
    }
    return ans;
}
    public:
    int search(int arr[], int s, int e, int key){
        // l: The starting index
        // h: The ending index, you have to search the key in this range
    
        // int min=arr[0];
        // int max=arr[n-1];
        int n=e+1;
        
        // cout<<pivotIndex(arr,n)<<endl;
        int pivot=pivotIndex(arr,n);
        
        if(key>=arr[pivot] && key<=arr[e]){
            return binarySearch(arr,pivot,e,key);
        }else{
            return binarySearch(arr,s,pivot-1,key);
        }
    }
};

//{ Driver Code Starts. 
int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int A[n];
        for(int i = 0; i < n; i++)
            cin >> A[i];
        int key;
        cin >> key;
        Solution ob;
        cout << ob.search(A, 0, n - 1, key) << endl;
    }
return 0;
}
// } Driver Code Ends