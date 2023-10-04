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
    Hero ramesh;
    // for getting element of ramesh
    cout<<"Ramesh health is: "<<ramesh.getHealth()<<endl;
    ramesh.setHealth(70);

    cout<<"Health is: "<<ramesh.getHealth()<<endl;
    cout<<"Level of h1 is:"<<ramesh.level<<endl;
}