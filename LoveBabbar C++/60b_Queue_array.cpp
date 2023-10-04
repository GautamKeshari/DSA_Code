#include<bits/stdc++.h>
using namespace std;

class Queue{
    public:
    int size;
    int *arr;
    int front;
    int rear;

    Queue(int s){
        this->size=s;
        arr=new int[s];
        front=0;
        rear=0;
    }

    bool isEmpty(){
        if(rear==front){
            return 1;
        }else{
            return 0;
        }
    }

    void enqueue(int element){
        if(rear=size){
            cout<<"Queue is Full"<<endl;      
        }else{
            arr[rear]=element;
            rear++;
        }
    }


    int dequeue(){
        if(front==rear){
            return -1;
        }else{
            int x= arr[front];
            front++;
            if(rear==front){
                rear=front=0;        //if queue is empty,then again queue start from 0.
            }
            return x;
        }
    }

    int front(){
        if(front==rear){
            return -1;
        }else{
            return arr[front];
        }
    }

};

int main(){
    
    Queue q(5);

    q.enqueue(13);
    q.enqueue(34);
    q.enqueue(45);
    q.enqueue(87);

    cout << q.dequeue()<<endl;

    return 0;
}