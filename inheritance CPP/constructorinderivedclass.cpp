#include<iostream>
using namespace std;
class base1{
    int data1;
    public:
    base1(int i){
        data1 = i;
        cout<<"base1 class cons is called"<<endl;
    }
    void printdatabase1(){
        cout<<"the value of data1 is : "<<data1<<endl;
    }
};
class base2{
    int data2;
    public:
    base2(int i){
        data2 = i;
        cout<<"base2 class cons is called"<<endl;
    }
    void printdatabase2(){
        cout<<"the value of data2 is : "<<data2<<endl;
    }
};

class derived : public base1,public base2{
    int derived1,derived2;
    public:
    derived(int a,int b,int c,int d) : base1(a) , base2(b){
        derived1 = c;
        derived2 = d;
        cout<<"derived class cons called"<<endl;      
    }
    void printdataderived(){
        cout<<"the value of derived1 is : "<<derived1<<endl;
        cout<<"the value of derived2 is : "<<derived2<<endl;
    }
};
int main(){
    derived d1(1,2,3,4);
    d1.printdatabase1();
    // d1.printdatabase2();
    // d1.printdataderived();
return 0;
}