#include <iostream>
using namespace std;

class hero{
    private:
        int health;
    public:
        char level;

    
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
    // hero ramesh;
    // ramesh.sethealth(1);
    // cout<<"ramesh ki health h : "<<ramesh.gethealth()<<endl;
    // ramesh.setlevel('A');
    // cout<<"ramesh ka level h : "<<ramesh.getlevel()<<endl;


    hero a;//static allocation
    a.sethealth(100);
    a.setlevel('B');
    cout<<"level of a: "<<a.getlevel()<<endl<<"health of a : "<<a.gethealth()<<endl;

    // dynamically creating an object

    hero*b = new hero;
    b->sethealth(90);
    b->setlevel('A');
    cout<<"level of b : "<<b->getlevel()<<endl<<"health of b : "<<b->gethealth()<<endl;
    return 0;
}