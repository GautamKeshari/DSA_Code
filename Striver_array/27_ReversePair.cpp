// https://practice.geeksforgeeks.org/problems/count-reverse-pairs/1

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class Solution {
    void merge(vector<int> &arr,int low,int mid,int high){
        int i=low,j=mid+1;
        vector<int> temp;
        while(i<=mid && j<=high){
            if(arr[i]<=arr[j]){
                temp.push_back(arr[i]);
                i++;
            }else{
                temp.push_back(arr[j]);
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
    
        for(int i=low;i<=high;i++){
            arr[i]=temp[i-low];
        }
    }
    int countPairs(vector<int> &arr,int low,int mid,int high){
        int right=mid+1;
        int cnt=0;
        for(int i=low;i<=mid;i++){
            while(right<=high && (arr[i]>2*arr[right])){
                right++;
            }
            cnt += right-(mid+1);
        }
        return cnt;
    }
    int mergeSort(vector<int> &arr,int low,int high){
        int cnt=0;
        if((high-low) <= 0) return 0;
        int mid=(low+high)/2;
        cnt += mergeSort(arr,low,mid); //O(log n)
        cnt += mergeSort(arr,mid+1,high);
        cnt += countPairs(arr,low,mid,high);
        merge(arr,low,mid,high); //O(n)
        return cnt;
    }
    
  public:
    int countRevPairs(int n, vector<int> arr) {
        return mergeSort(arr,0,n-1);
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr;

        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            arr.push_back(x);
        }

        Solution obj;
        cout << obj.countRevPairs(n, arr) << endl;
    }
    return 0;
}