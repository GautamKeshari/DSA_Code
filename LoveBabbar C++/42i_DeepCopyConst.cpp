#include<bits/stdc++.h>
using namespace std;

class Hero{
    private:
    int health;
    public:
    char level;
    char *name;   //here it stored address ,so in default copy constructor address of name is changed

    int getHealth(){
        return health;
    }
    // Non-Parameterised constructor
    Hero(){
        cout<<"Simple Constructor Called"<<endl;
        name= new char[100];
    }
    //parameterised constructor
    Hero(int health){
        cout<<"this -> "<<this<<endl;
        this->health=health;  //1st health is belong to health of hero and 2nd health belong to outside health 
    }

    Hero(int health,char level){
        cout<<"this address is -> "<<this<<endl;
        this->health=health;
        this->level=level;
    }

    // Copy Constructor

    Hero(Hero &temp){
        cout<<"Deep Copy Constructor"<<endl;
        char *ch = new char[strlen(temp.name+1)];
        strcpy(ch,temp.name);
        this->name=ch;
        this->level=temp.level;
        this->health=temp.health;
    }

    void print(){
        cout<<"Health is: "<<this->health<<",";
        cout<<"Level is: "<<this->level<<",";
        cout<<"Name is: "<<this->name<<endl;
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

    void setName(char name[]){
        strcpy(this->name,name);
    }

    ~Hero(){
        cout<<"Destructor is called"<<endl;
    }
};

int main(){

    Hero hero1;
    hero1.setHealth(12);
    hero1.setLevel('D');
    char name[7]="Babbar";
    hero1.setName(name);

    // hero1.print();
    // Hero *h =  new Hero(10);
    cout<<endl;

    Hero hero2(hero1);
    // hero2.print();
    cout<<endl;

    hero1.name[0]='G';
    hero1.print();
    cout<<endl;

    // cout<<"This is example of deep copy constructor"<<endl;
    hero2.print();
    cout<<"\n";

    //copy assignment operator
    hero1=hero2;
    hero1.print();
    cout<<endl;
    hero2.print();
}
