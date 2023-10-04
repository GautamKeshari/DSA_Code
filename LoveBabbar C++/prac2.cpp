#include<bits/stdc++.h>
using namespace std;

class heap {
    public:
    int arr[100];
    int size=0;
    
    heap(){
        arr[0] = -1;
        size = 0;
    }

    void insert(int x){
        size=size+1;
        int index=size;
        arr[index]=x;
        while(index>1){
            int parent=index/2;
            if(arr[parent]<arr[index]){
                swap(arr[parent],arr[index]);
                index=parent;
            }else{
                return;
            }
        }
    }
    void print(){
        for(int i=1;i<=size;i++){
            cout<<arr[i]<<" ";
        } cout<<endl;
    }

    void deletion(){
        swap(arr[1],arr[size]);
        size--;
        int index=1;
        while(index<=size){
            int leftchild=2*index;
            int rightchild=2*index+1;
            int maxIndex= (arr[rightchild]<arr[leftchild])? leftchild:rightchild;
            if(arr[index]<arr[maxIndex] && maxIndex<=size){
                swap(arr[index],arr[maxIndex]);
                index=maxIndex;
            }else{
                return;
            }
        }
    }
};

int main(){
    heap h;
    h.insert(34);
    h.insert(76);
    h.insert(25);
    h.insert(15);
    h.insert(83);
    h.print(); 

    h.deletion();
    h.print(); 
    h.deletion();
    h.print(); 
    h.deletion();
    h.print(); 
    h.deletion();
    h.print(); 
    h.deletion();
    h.print(); 
    h.deletion();
}