#include <iostream>
using namespace std;
class y;
class x
{
    int data;

public:
    void setvalue(int value)
    {
        data = value;
    }
    friend void add(x, y);
};
class y
{
    int num;

public:
    void setvalue(int value)
    {
        num = value;
    }
    friend void add(x, y);
};
void add(x o1, y o2)
{
    cout << "sum of data of x and y is " << o1.data + o2.num << endl;
}
int main()
{
    x a;
    y b;
    a.setvalue(3);
    b.setvalue(4);
    add(a, b);
    return 0;
}