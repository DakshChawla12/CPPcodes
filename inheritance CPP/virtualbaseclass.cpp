#include <iostream>
using namespace std;
/*
Inheritance:
student  ---> test
student  ---> sports
test --> result
sports --> result
*/
class student
{
protected:
    int rollno;

public:
    void setNumber(int a)
    {
        rollno = a;
    }
    void printNumber()
    {
        cout << "your roll number is :" << rollno << endl;
    }
};

class test : virtual public student
{
protected:
    float maths, physics;

public:
    void setmarks(float m1, float m2)
    {
        maths = m1;
        physics = m2;
    }
    void printmarks()
    {
        cout << "your theory marks are here : " << endl
             << "Maths : " << maths << endl
             << "Physics : " << physics << endl;
    }
};

class sports : virtual public student
{
protected:
    float score;

public:
    void setscore(int sc)
    {
        score = sc;
    }
    void printScore()
    {
        cout << "your PT score is " << score << endl;
    }
};

class result : public test, public sports
{
private:
    float total;

public:
    void display()
    {
        total = maths + physics + score;
        printNumber();
        printmarks();
        printScore();
        cout << "your total score is : " << total << endl;
    }
};
int main()
{
    result harry;
    harry.setNumber(420);
    harry.setmarks(78.9, 88.5);
    harry.setscore(90);
    harry.display();
    return 0;
}