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
    //static
    Hero a;
    //dynamic  
    Hero *b =  new Hero;
    //manually destructor is called
    delete b;


}
