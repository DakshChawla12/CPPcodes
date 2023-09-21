#include <iostream>
using namespace std;

class complex;

class calculator
{
public:
    int add(int a, int b)
    {
        return a + b;
    }
    int sumrealComplex(complex , complex );
    int sumCompComplex(complex , complex );
};

class complex
{
    int a, b;
    // friend int calculator ::sumrealComplex(complex , complex);
    // friend int calculator ::sumCompComplex(complex , complex);

    // Aliter: declaring the entire class calculator as friend

    friend class calculator;

public:
    void setNUMBER(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    void printNUMBER()
    {
        cout << "your number is " << a << " + " << b << "i" << endl;
    }
};

int calculator::sumrealComplex(complex o1, complex o2)
{
    return (o1.a + o2.a);
}

int calculator::sumCompComplex(complex o1, complex o2)
{
    return (o1.b + o2.b);
}

int main()
{
    complex o1, o2;
    o1.setNUMBER(1, 2);
    o2.setNUMBER(5, 7);
    calculator calc;
    int res = calc.sumrealComplex(o1, o2);
    cout << "the sum of real part of o1 and o2 is " << res << endl;
    int reso = calc.sumCompComplex(o1,o2);
    cout << "the sum of complex part of o1 and o2 is " << reso << endl;
    return 0;
}