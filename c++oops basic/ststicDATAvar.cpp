#include <iostream>
using namespace std;
class employee
{
public:
    int id;
    static int count;
    void setDATA(void)
    {
        cout << "enter ID:" << endl;
        cin >> id;
        count++;
    }
    void getDATA(void)
    {
        cout << "ID of employee number " << count << " is " << id << endl;
    }
    static void getCount(void)
    {
        cout << "the value of count is " << count << endl;
    }
};
// *********static variables are defined outside of the class*******
int employee::count; // default value is 0
int main()
{
    employee daksh, rohan, lovish;
    daksh.setDATA();
    daksh.getDATA();
    employee::getCount();

    rohan.setDATA();
    rohan.getDATA();
    employee::getCount();

    lovish.setDATA();
    lovish.getDATA();
    employee::getCount();
    return 0;
}