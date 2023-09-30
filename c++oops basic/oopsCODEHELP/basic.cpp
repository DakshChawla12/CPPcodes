#include <iostream>
using namespace std;

class hero{
    //properties
    public:
    int health;
    char level;
};


int main(){

    hero ramesh;
    ramesh.health = 60;
    ramesh.level = 'a';
    //cout<<"size : "<<sizeof(h1);
    cout<<"health is : "<<ramesh.health<<endl;
    cout<<"level is : "<<ramesh.level<<endl;

    return 0;
}