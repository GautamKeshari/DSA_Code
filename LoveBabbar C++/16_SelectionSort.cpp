#include<bits/stdc++.h>
using namespace std;

void selectionSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int minIndex=i;
        for(int j=i;j<n;j++){
            if(arr[j]<arr[minIndex]){
                minIndex=j;
            }
        }
        swap(arr[minIndex],arr[i]);
    }
}

int main(){
    int arr[5]={64,25,12,22,11};

    selectionSort(arr,5);

    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
}