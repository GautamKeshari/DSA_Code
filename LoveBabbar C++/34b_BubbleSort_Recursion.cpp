#include<iostream>
using namespace std;

void bubbleSort(int arr[],int size){
    if(size==0 || size==1){
        return;
    }

    bool swapped=false;

    for(int i=0;i<size-1;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
            swapped=true;
        }
    }

    if(swapped==false) return;

    bubbleSort(arr,size-1);
}

int main(){
    int size=5;
    int arr[5]={45,18,37,9,23};

    bubbleSort(arr,size);

    cout<<"Sorted array is: "<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}