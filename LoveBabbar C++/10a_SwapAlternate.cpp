#include<iostream>
using namespace std;

void swapAlternate(int arr[],int n){
    for(int i=0;i<n;i=i+2){
        if(i+1 < n){
            swap(arr[i],arr[i+1]);
        }
    }
}

int main(){
    int n;
    cin>>n;
    int *arr=new int[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    swapAlternate(arr,n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" "<<endl;
    }
}