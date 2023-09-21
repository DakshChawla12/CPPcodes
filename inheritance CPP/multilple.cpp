#include <iostream>
using namespace std;
 //[[ A aur B se bna C  ]]
/* basic syntax of multiple inheritance
class derived : visibility -mode base1,  visibility-mode base2{
                     
};*/
class base1
{
protected:
    int base1int;

public:
    void set_base1int(int a)
    {
        base1int = a;
    }
};
//***********************
class base2
{
protected:
    int base2int;

public:
    void set_base2int(int b)
    {
        base2int = b;
    }
};
//********************************
class derived : public base1, public base2
{
public:
    void show()
    {
        cout << " the value of base1 is :  " << base1int << endl
             << "the value of base2 is : " << base2int << endl;
        cout << "sum of base1 and base2 is : " << (base1int + base2int) << endl;
    }
};
int main()
{
    derived harry;
    harry.set_base1int(23);
    harry.set_base2int(56);
    harry.show();

    return 0;
}