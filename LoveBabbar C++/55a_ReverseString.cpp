#include<bits/stdc++.h>
using namespace std;
//REVERSE THE STRING USING STACK
class Stack{
    public:
    char *arr;
    int size;
    int top;

    Stack(int len){
        this->size=len;
        arr=new char[len];
        top=-1;
    }

    void push(int element){
        if(top==size-1){
            cout<<"Stack Overflow"<<endl;
        }else{
            top++;
            arr[top]=element;
        }
    }

    void pop(){
        if(top==-1){
            cout<<"Stack Underflow"<<endl;
        }else{
            cout<<arr[top]<<endl;
            top--;
        }
    }
    
};

int main(){
    string str;
    cin>>str;

    int size=str.length();


    Stack s(size); 

    for(int i=0;i<size;i++){
        s.push(str[i]);
    }
    cout<<endl;
    cout<<"Reverse string is: ";
    for(int i=0;i<size;i++){
        s.pop();
    }


}