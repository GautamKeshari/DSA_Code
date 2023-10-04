// push(x),pop(),top(),empty(),front()

#include<bits/stdc++.h>
using namespace std;

int main(){
    queue<int> q;

    q.push(2);
    q.push(4);
    q.push(5);
    q.push(7);

    cout<<"size of queue is "<<q.size()<<endl;
    cout<<"front element of queue is "<<q.front()<<endl;

    q.pop();
    cout<<"front element of queue is "<<q.front()<<endl;

    if(q.empty()){
        cout<<"Q is empty"<<endl;
    }else{
        cout<<"Q is not empty"<<endl;
    }

}