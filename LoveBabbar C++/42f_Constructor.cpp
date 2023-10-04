#include<bits/stdc++.h>
using namespace std;

class Hero{
    private:
    int health;
    public:
    char level;

    int getHealth(){
        return health;
    }

    // Hero(){
    //     cout<<"Constructor Called"<<endl;
    // }

    char getLevel(){
        return level;
    }

    void setHealth(int h){
        health=h;
    }

    void setLevel(char ch){
        level=ch;
    }
};

int main(){
    Hero ramesh();  //If we write this then by default compiler creates constructor , but if we define a contructor in class then this default constructor already removed. 

    // Hero ramesh(30);   
}