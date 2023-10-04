#include<bits/stdc++.h>
using namespace std;

int main(){
    // const int var=10;
    int x=10;
    char y='M';

    const int *p = &x; 
    const char *q = &y;
    
    // value of x and y can be changed ,they are not constant type.
    cout<<*p<<" "<<*q<<endl;

    x=15;
    y='N';
    
    // *p=17;   error
    // *q='N';

    cout<<*p<<" "<<*q<<endl;
}