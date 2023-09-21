#include <iostream>
using namespace std;
class employee
{
    int ID;
    int salary;

public:
    void setID(void)
    {
        salary = 1000;
        cout << "enter ID:" << endl;
        cin >> ID;
    }
    void getID(void)
    {
        cout << "the ID of employee is " << ID << endl;
    }
};

int main()
{
    // employee harry,rohan,lovish,daksh;
    employee fb[5];
    for (int i = 0; i < 5; i++)
    {
        fb[i].setID();
        fb[i].getID();
    }
    return 0;
}