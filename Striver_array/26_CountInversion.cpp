// https://practice.geeksforgeeks.org/problems/inversion-of-array-1587115620/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article
#include <bits/stdc++.h>
using namespace std;
// Overall T.C.=>O(n * log n);  S.C.=>O(n)

class Solution{
  public:
    // Function to count inversions in the array.
    void merge(long long arr[],long long low,long long mid,long long high,long long int &cnt){
        long long i=low,j=mid+1;
        vector<long long> temp;
        while(i<=mid && j<=high){
            if(arr[i]<=arr[j]){
                temp.push_back(arr[i]);
                i++;
            }else{
                // This is the case where right is smaller
                temp.push_back(arr[j]);
                cnt+= mid-i+1;
                j++;
            }
        }
        while(i<=mid){
            temp.push_back(arr[i]);
            i++;
        }
        while(j<=high){
            temp.push_back(arr[j]);
            j++;
        }
        for(long long i=low;i<=high;i++){
            arr[i]=temp[i-low];
        }
    }
    void mergeSort(long long arr[],long long low,long long high,long long int &cnt){
        if((high-low) <= 0) return;
        long long mid=(low+high)/2;
        mergeSort(arr,low,mid,cnt); //O(log n)
        mergeSort(arr,mid+1,high,cnt);
        merge(arr,low,mid,high,cnt); //O(n)
    } 
    
    long long int inversionCount(long long arr[], long long n)
    {
        long long int cnt=0;
        mergeSort(arr,0,n-1,cnt);
        return cnt;
    }

};

int main() {
    long long T;
    cin >> T;
    while(T--){
        long long N;
        cin >> N;
        long long A[N];
        for(long long i = 0;i<N;i++){
            cin >> A[i];
        }
        Solution obj;
        cout << obj.inversionCount(A,N) << endl;
    }
    return 0;
}