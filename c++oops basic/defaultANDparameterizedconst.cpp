#include <iostream>
using namespace std;
class complex
{
    int a, b;

public:
    void printNumber()
    {
        cout << "your comlex number is " << a << " + " << b << "i" << endl;
    }
    complex(int,int);
};
complex ::complex(int x,int y)//parameterized constructors(takes 2 parameters)
{ 
    a = x;
    b = y;
}

int main()
{
    complex c1(4,6);//implicit calll
    c1.printNumber();
    complex c2 = complex(5,7);//explicit call
    c2.printNumber();
    return 0;
}