#include<iostream>
using namespace std;

int findSum(int arr[],int size,int sum){
    if(size==0){
        return sum + arr[0];
    }

    // sum = sum+arr[0];
    return findSum(arr+1,size-1,sum+arr[0]);
}

int main(){
    int size=5;
    int arr[5]={23,34,35,56,67};
    int sum=0;

    cout<<findSum(arr,size,sum)<<endl;
}