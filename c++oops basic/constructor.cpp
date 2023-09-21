#include<iostream>
using namespace std;
class complex{
    int a,b;
    //creating a constructor
    //constructor is a special member function with same name as class. 
    //it is automatically invoked whenever a object is created.
    //it is used to initialize objects of a class
    public:
    complex(void);//constructor declaration
    void printdata(void){
        cout<<"your complex number is "<<a<<" + "<<b<<"i"<<endl;
    }
};
complex :: complex(void){
    a=10;
    b=0;
}
int main(){
    complex c1,c2,c3;
    c1.printdata();
    c2.printdata();
    c3.printdata();
return 0;
}
/*properties of constructors
1) it should be declared in pubic section of class
2) they are automatically invoked whenever an object is created
3) they cannot return values and do not have return types
4) it can have default args
5) we cannot refer to the address
*/