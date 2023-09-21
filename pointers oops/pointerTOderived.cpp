#include <iostream>
using namespace std;
class baseClass
{
public:
    int var_base;
    void display()
    {
        cout << "display base class variable : " << var_base << endl;
    }
};

class derivedClass : public baseClass
{
public:
    int var_derived;
    void display()
    {
        cout << "display base class variable : " << var_base << endl;
        cout << "displaying the derived class variable : " << var_derived;
    }
    /* base class k pointer ko derived class se point krwane pr bhi
    base class ka fn call hoga.*/
};
int main()
{
    baseClass *base_class_ptr;
    baseClass obj_base;
    derivedClass obj_derived;
    base_class_ptr = &obj_derived; // pointing base class pointer to derived class
    base_class_ptr->var_base = 34;
    // base_class_ptr->var_derived=134; // will throw an error
    base_class_ptr->display();
    derivedClass *derived_class_ptr;
    derived_class_ptr = &obj_derived;
    derived_class_ptr->var_derived = 98;
    derived_class_ptr->display();
    return 0;
}