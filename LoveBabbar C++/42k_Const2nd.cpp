#include<bits/stdc++.h>
using namespace std;

int main(){
    // const int var=10;
    int x=20;
    char y='G';

    int a=30;
    char b='H';

    int* const p = &x; 
    char* const q = &y;
    
    // value of x and y can be changed ,they are not constant type.
    cout<<*p<<" "<<*q<<endl;

    // x=15;
    // y='N';
    
    // *p=50;   
    // *q='K';

    cout<<*p<<" "<<*q<<endl;
}