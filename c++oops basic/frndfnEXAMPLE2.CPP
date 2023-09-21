#include <iostream>
using namespace std;
class c2;
class c1
{
    int val;

public:
    void indata(int a)
    {
        val = a;
    }
    void display(void)
    {
        cout << val << endl;
    }
    friend void exchange(c1 &x, c2 &y);
};
class c2
{
    int val2;

public:
    void indata(int a)
    {
        val2 = a;
    }
    void display(void)
    {
        cout << val2 << endl;
    }
    friend void exchange(c1 &x, c2 &y);
};
void exchange(c1 &x, c2 &y)
{
    int temp = x.val;
    x.val = y.val2;
    y.val2 = temp;
}

int main()
{
    c1 oc1;
    oc1.indata(34);
    c2 oc2;
    oc2.indata(98);
    exchange(oc1, oc2);
    cout << "vaue of c1 after swapping is :";
    oc1.display();

    cout << "vaue of c2 after swapping is :";
    oc2.display();
    return 0;
}