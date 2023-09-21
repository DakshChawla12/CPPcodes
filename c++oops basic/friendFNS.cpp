#include <iostream>
using namespace std;
class complex
{
    int a, b;

public:
    void setNUMBER(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    //line below means that NON-MEMBER sunCOMPLEX function is allowed acces private members of class
    friend complex sumCOMPLEX(complex o1, complex o2);
    void printNUMBER()
    {
        cout << "your number is " << a << " + " << b << "i" << endl;
    }
};
complex sumCOMPLEX(complex o1, complex o2)
{
    complex o3;
    o3.setNUMBER((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}
int main()
{
    complex c1, c2, sum; 
    c1.setNUMBER(1, 4);
    c2.setNUMBER(5, 8);
    c1.printNUMBER();
    c2.printNUMBER();

    sum = sumCOMPLEX(c1, c2);
    sum.printNUMBER();
    return 0;
}
/*properties of friend functions
    1) not in scope of class
    2) since it is note in class it cannot be called from an object of that class
    c1.sumCOMPLEX() == INVALID
    3) can be invoked without the help of any object
    4) usually contains objects as arguments
    5) can be declared in either PUBLIC or PRIVATE section of class
    6) it cannot access member directly by names and need object name
*/