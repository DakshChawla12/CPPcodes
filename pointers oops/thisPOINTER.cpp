#include<iostream>
using namespace std;
class A{
    int a;
    public:
    void setData(int a){
      this->a = a;
    }
    void getData(){
        cout<<"the value of a is : "<<a<<endl;
    }
};
/*
this is a keyword which is a pointer which points to the object
which invokes the member function*/
int main(){
    A a;
    a.setData(4);
    a.getData();

return 0;
}