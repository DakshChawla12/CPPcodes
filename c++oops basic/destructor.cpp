#include <iostream>
using namespace std;
// dest never takes an argument and does not return any value
int count = 0;
class num
{
public:
    num()
    {
        count++;
        cout << "this is the time when cons is called for object number " << count << endl;
    }

    ~num()
    {
        cout << "this is the time when dest is called for object  number " << count << endl;
        count--;
    }
};
int main()
{
    cout << "we are in main fn" << endl;
    cout << "cretaing first object" << endl;
    num n1;
    {
        cout << "entering this block" << endl;
        cout << "creating two more objects" << endl;
        num n2, n3;
        cout << "exiting this block" << endl;
    }
    cout << "back to main" << endl;
    return 0;
}