#include<bits/stdc++.h>
using namespace std;

int main(){
    stack <int> s;


    s.push(3);
    s.push(5);
    s.push(7);
    s.push(1);

    s.pop();
    s.pop();

    cout<<"Top element is: "<<s.top()<<endl;

    if(s.empty()) cout<<"Stack is Empty";
    else cout<<"Stack is not empty";
}