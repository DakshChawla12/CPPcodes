#include <iostream>
using namespace std;
// constructor is invoked at object creation

class hero{
    private:
        int health;
    public:
        char level;

    //constructor
    hero(){
        cout<<"constructor called "<<endl;
    }

    //parameterized constructor
    hero(int health){
        cout<<"this --> "<<this<<endl;
        this->health = health;
    }    

    hero(int health,char level){
        this->level = level;
        this->health = health;
        cout<<"work done"<<endl;
    }
    
    //setters
    void sethealth(int h){
        health = h;
    }
    void setlevel(char ch){
        level = ch;
    }

    //getters
    int gethealth(){
        return health;
    }
    char getlevel(){
        return level;
    }
};

int main(){
    
    // hero ramesh(10);
    // cout<<"adress : "<<&ramesh<<endl;

    // hero*a = new hero(100);

    hero temp(50,'B');
    
    return 0;
}