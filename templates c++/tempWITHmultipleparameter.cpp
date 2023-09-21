#include <iostream>
using namespace std;
/*
         synatx
template <class t1,class t2>
class name{
    body
};
*/
template <class t1, class t2>
class myCLass
{
public:
    t1 data1;
    t2 data2;
    myCLass(t1 a, t2 b)
    {
        data1 = a;
        data2 = b;
    }
    void display()
    {
        cout << this->data1 << endl
             << this->data2;
    }
};
int main()
{
    // myCLass<int ,char> obj(1,'c');
    // obj.display();
    myCLass<int, float> obj(1, 1.43736);
    obj.display();
    return 0;
}