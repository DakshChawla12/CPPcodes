#include <iostream>
using namespace std;
class number
{
    int a = 0;

public:
    number() {}
    number(int num)
    {
        a = num;
    }
   
    number(number &obj)
    {
   
        cout << "copy constructor called" << endl;
   
        a = obj.a;
   
    }
    void display()
    {
        cout << "the number for this object is " << a << endl;
    }
};
int main()
{
    number x(8), y(1), z(45),r;
    x.display();
    y.display();
    z.display();
    number z1(x);
    z1.display();
    r=z;
    number z2=y;
    z2.display();


    return 0;
}