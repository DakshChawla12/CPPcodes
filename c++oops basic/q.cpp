#include<iostream>
using namespace std;
class complex{
    int a,b;
    public:
    complex(int x,int y){
        a=x;
        b=y;
    }
    void display(void){
        cout<<"your complex number is "<<a<<" +"<<b<<"i"<<endl;
    }
};
int main(){
    complex n1(3,5);
    n1.display();
return 0;
}