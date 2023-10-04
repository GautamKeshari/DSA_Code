#include<iostream>
using namespace std;

class Stack{
    public:
    int *arr;
    int size;
    int top;

    Stack(int d){
        this->size=d;
        arr=new int[size];
        top=-1;
    }
    
    void push(int d){
        if(top==size-1){
            cout<<"Stack Overflow"<<endl;
        }else{
            arr[++top]=d;   
        }
    }

    void pop(){
        if(top==-1){
            cout<<"Stack underflow"<<endl;
        }else{
            top--;
        }
    }

    int peek(){
        if(top>=0 && top<(size)){
            int x=arr[top];
            return x;
        }else{
            cout<<"Stack is empty"<<endl;
            return -1;
        }
    }

    bool isEmpty(){
        if(top==-1){
            return true;   
        }else{
            return false;
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
    cout<<"1 "<<st.peek()<<endl;  

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