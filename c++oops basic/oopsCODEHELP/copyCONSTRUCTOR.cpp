#include <iostream>
#include <string.h>
using namespace std;

class hero{
    private:
        int health;
    public:
    char *name;
        char level;

    //constructor
    hero(){
        cout<<"default constructor called "<<endl;
        name = new char[100];
    }

    // parameterized constructor
    hero(int health){
        cout<<"this --> "<<this<<endl;
        this->health = health;
    }    

    hero(int health,char level){
        this->level = level;
        this->health = health;
        cout<<"work done"<<endl;
    }

    //copy constructor
    hero(hero &temp){
        cout<<"copy cons called"<<endl;
        char *ch = new char[strlen(temp.name)+1];
        strcpy(ch,temp.name);

        this->name = ch;
        this->health = temp.health;
        this->level = temp.level;
    }

    void print(){
        cout<<"name is : "<<this->name<<endl;
        cout<<"health is : "<<this->health<<endl;
        cout<<"level is : "<<this->level<<endl;
    }
    //setters
    void sethealth(int h){
        health = h;
    }
    void setlevel(char ch){
        level = ch;
    }
    void setname(char name[]){
        strcpy(this->name,name);
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

    // hero suresh(70,'C');
    // suresh.print();
    // cout<<endl;

    //  //copy constructor
    //  hero r(suresh); // copying the data of suresh into r
    //  r.print();

    hero h1;
    h1.sethealth(12);
    h1.setlevel('D');
    char name[10] = "daksh";
    h1.setname(name);

    h1.print();


    //use default copy constructor   --> default copy const creates shallow copy
    // hero h2(h1);
    // h2.print();



    return 0;
}