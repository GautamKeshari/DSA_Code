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
    Hero a;
    a.setHealth(70);
    a.level='A';
    cout<<"Health is: "<<a.getHealth()<<endl;
    cout<<"Level of h1 is:"<<a.level<<endl;

    Hero *b = new Hero;
    (*b).setHealth(70);
    (*b).level='B';
    cout<<"B health: "<<"\n";
    cout<<(*b).getHealth()<<endl;
    cout<<(*b).level<<endl;

    cout<<"Access by arrow: "<<"\n";
    cout<<b->getHealth()<<endl;
    cout<<b->level<<endl;
}