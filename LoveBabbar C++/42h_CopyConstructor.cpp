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

    Hero(int health,char level){
        cout<<"this -> "<<this<<endl;
        this->health=health;
        this->level=level;
    }

    Hero(Hero &temp){
        this->health=temp.health;
        this->level=temp.level;         //Not temp->level
    }

    void print(){
        cout<<health<<endl;
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

    // Hero ramesh(10);
    // cout<<"Address of ramesh is: "<<&ramesh<<endl;

    Hero ramesh(10,'C');
    ramesh.print();

    Hero shyam(ramesh);
    shyam.print();

    // Hero *h =  new Hero(10);
}


// this address and ramesh address is same