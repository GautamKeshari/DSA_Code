#include<bits/stdc++.h>
using namespace std;
// T.C. => O(log n)
int firstOccurence(int arr[],int n,int k){
    int s=0;
    int e=n-1;
    int ans=-1;
    int mid=0;

    while(s<=e){
        mid=s+(e-s)/2;
        if(arr[mid]==k){
            ans=mid;
            e=mid-1;
        }else if(arr[mid]>k){
            e=mid-1;
        }else{
            s=mid+1;
        }
    }
    return ans;
}

int lastOccurence(int arr[],int n,int k){
    int s=0;
    int e=n-1;
    int ans=-1;
    int mid=0;

    while(s<=e){
        mid=s+(e-s)/2;
        if(arr[mid]==k){
            ans=mid;
            s=mid+1;
        }else if(arr[mid]>k){
            e=mid-1;
        }else{
            s=mid+1;
        }
    }
    return ans;
}

int main(){
    int even[5]={1,2,3,3,5};
    int x=firstOccurence(even,5,3);
    int y=lastOccurence(even,5,3);
    cout<<x<<" "<<y<<endl;
    cout<<"Total no. of occurence is: "<<y-x+1<<endl;
}