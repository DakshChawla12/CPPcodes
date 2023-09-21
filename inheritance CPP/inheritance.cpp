#include<iostream>
using namespace std;
class employee{ // base class
    // float salary;
    public:
    int id;
    float salary;
    employee(int inpid){ 
        id = inpid;
         salary = 100;
    }
    employee(){}
};
//derived class syntax
//   class {{derived-classname}} : {{visibility-mode}}  {{base-classname}}

// creating a programmer class derived from employee base class.

// default visibilty mode is private

class programmer : public  employee{
    public:
    int salary;
    programmer(int inpid){
        id = inpid;
    }
    int langcode = 9;
    void getdata(void){
        cout<<id<<endl;
    }
};
int main(){
    employee harry(1),rohan(2);
    cout<<harry.salary<<endl;;
    cout<<rohan.salary<<endl;
    programmer daksh(10);
    cout<<daksh.langcode;
    daksh.getdata();
    cout<<daksh.salary;
return 0;
}