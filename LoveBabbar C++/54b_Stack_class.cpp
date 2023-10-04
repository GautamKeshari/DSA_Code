#include<bits/stdc++.h>
using namespace std;

class Stack{
    public:

    //properties
    int *arr;
    int size;
    int top;

    //behavior
    Stack(int size){
        this->size=size;
        arr=new int[size];
        top=-1;
    }

    bool isEmpty(){
        if(top==-1){
            return 1;
        }else{
            return 0;
        } 
    }

    bool isFull(){
        if(top==size-1){
            return 1;
        }else{
            return 0;
        } 
    }

    void push(int element){
        if(top==size-1){
        // if(isFull(st)){
            cout<<"Stack Overflow"<<endl;
        }else{
            top++;
            arr[top]=element;
        }
    }
    
    void pop(){
        if(top==-1){
        // if(isEmpty(st)){
            cout<<"Stack Underflow"<<endl;
        }else{
            top--;
        }
    }

    int peek(){
        if(top>=0 && top<size){
            return arr[top];
        }else{
            cout<<"Stack is empty :"<<endl;
            return -1;
        }
    }
};

int main(){
    Stack st(5);

    st.push(1);    
    st.push(2);    
    st.push(4);    
    st.push(8);     
    st.push(10);     
    st.push(18);     
    cout<<st.peek()<<endl;  

    st.pop();  

    cout<<st.peek()<<endl; 

    st.pop();  

    cout<<st.peek()<<endl;   

    st.pop();  

    cout<<st.peek()<<endl; 

    if(st.isEmpty()){
        cout<<"My friend Stack is now empty"<<endl;
    }else cout<<"My friend Stack is not empty"<<endl;

}