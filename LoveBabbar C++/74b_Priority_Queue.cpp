#include<bits/stdc++.h>
#include<queue>
using namespace std;

int main(){
    cout<<"Using priority Queue here"<<endl;
    // for min heap
    priority_queue<int,vector<int>,greater<int> >minheap;

    minheap.push(4);
    minheap.push(2);
    minheap.push(5);
    minheap.push(3);

    cout<<minheap.top()<<endl;
    minheap.pop();

    bool x= minheap.empty();

    // for maxheap
    priority_queue<int> maxheap;

}