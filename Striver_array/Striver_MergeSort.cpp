#include<bits/stdc++.h>
using namespace std;
// Overall T.C.=>O(n * log n);  S.C.=>O(n)
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
void mergeSort(vector<int> &arr,int low,int high){
    if((high-low) <= 0) return;
    int mid=(low+high)/2;
    mergeSort(arr,low,mid); //O(log n)
    mergeSort(arr,mid+1,high);
    merge(arr,low,mid,high); //O(n)
}
int main(){
    int n;cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        int x;cin>>x;
        arr[i]=x;
    }
    mergeSort(arr,0,n-1);
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}