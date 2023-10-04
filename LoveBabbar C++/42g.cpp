#include<iostream>
using namespace std;

class Hero{
    private:
    int health;
    public:
    char level;

    int getHealth(){
        return health;
    }
    // Non-Parameterised constructor
    Hero(){
        cout<<"Constructor Called"<<endl;
    }
    //parameterised constructor
    Hero(int health){
        cout<<"this -> "<<this<<endl;
        this->health=health;  //1st health is belong to health of hero and 2nd health belong to outside health 
    }

    void print(){
        cout<<level<<endl;
    }

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
    // Hero h;   because here if any other parameterized constructor is made , then default constructor already removed.

    Hero ramesh(10);  //If we write this then by default compiler creates constructor , but if we define a contructor in class then this default constructor already removed. 
    // ramesh.setHealth(10);
    cout<<"Address of ramesh is: "<<&ramesh<<endl;

    Hero *h =  new Hero(10);
    cout<<h->getHealth()<<endl;
}


// this address and ramesh address is same