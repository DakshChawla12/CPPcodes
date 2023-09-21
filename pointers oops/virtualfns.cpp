#include<iostream>
using namespace std;
class baseClass
{
public:
    int var_base = 1;
    virtual void display()
    {
        cout << " (1)  display base class variable : " << var_base << endl;
    }
};

class derivedClass : public baseClass
{
public:
    int var_derived = 2;
    void display()
    {
        cout << "  (2) display base class variable : " << var_base << endl;
        cout << "  (2) displaying the derived class variable : " << var_derived;
    }
    /* base class k pointer ko derived class se point krwane pr bhi
    base class ka fn call hoga.*/
};
int main(){
    baseClass *base_class_ptr;
    baseClass obj_base;
    derivedClass obj_derived;
    base_class_ptr = &obj_derived;
    base_class_ptr->display();

return 0;
}