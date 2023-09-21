/*    NOTES:
 if we are inheriting B from A and C from B  [A--B-->C]
1) A is base class for B and B is base class for C.
2) A--B-->C is called inheritance path.
*/
#include <iostream> //  A se B se C
using namespace std;
class student // c1
{
protected:
    int rollno;

public:
    void setROLLnumber(int);
    void getROLLnumber(void);
};
void student ::setROLLnumber(int r)
{
    rollno = r;
}
void student ::getROLLnumber()
{
    cout << "the roll number is " << rollno << endl;
}
//*************************** new class is made***
class exam : public student
{ // c2 inherited from c1 ( student se exma bnaya)
protected:
    float maths;
    float physics;

public:
    void set_marks(float, float);
    void get_marks();
};
void exam ::set_marks(float m1, float m2)
{
    maths = m1;
    physics = m2;
}
void exam ::get_marks()
{
    cout << "Maths marks : " << maths << endl
         << "physics marks : " << physics << endl;
}
//******************************** new class is made***
class result : public exam
{
    float percentage;

public:
    void display()
    {
        getROLLnumber();
        get_marks();
        cout << " your percentsge is : " << (maths + physics) / 2 << endl;
    }
};
int main()
{
    result harry;
    harry.setROLLnumber(420);
    harry.set_marks(94.0, 90.0);
    harry.display();
    return 0;
}