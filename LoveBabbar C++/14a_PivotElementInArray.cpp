#include<bits/stdc++.h>
using namespace std;

int pivotElement(int arr[],int n){
    int s=0,e=n-1;
    int ans=arr[n-1];

    while(s<e){
        int mid=s+(e-s)/2;

        if(arr[mid]<arr[n-1]){
            e=mid;
            ans=arr[mid];
        }
        if(arr[mid]>=arr[0]){
            s=mid+1;
            ans=arr[mid+1];
        }
    }
    return ans;
}

int main(){
    int n=4;
    int arr[n]={10,15,20,9};

    cout<<pivotElement(arr,n)<<endl;
}