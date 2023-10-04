#include<bits/stdc++.h>
using namespace std;

bool isSorted(int arr[],int size){
    if(size==0 || size==1){
        return true;
    }

    if(arr[0]>arr[1]) return false;

    return isSorted(arr+1,size-1);
}

int main(){
    int size=5;
    int arr[5]={10,39,34,45,67};

    cout<<isSorted(arr,size)<<endl;
}