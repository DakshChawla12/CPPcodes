#include <iostream>
using namespace std;
class complex
{
    int real, img;

public:
    void getdata()
    {
        cout << "the real part is : " << real << endl;
        cout << "the imaginary part is : " << img << endl;
    }
    void setdata(int a, int b)
    {
        real = a;
        img = b;
    }
};
int main()
{
    complex *ptr = new complex; // new object
    // complex c1;
    // complex*ptr = &c1;
    //arrow operator
    //   (*ptr).setdata(1, 54);      is same as
    ptr->setdata(1, 54);

    // arrow khta h ki iss popinter ko dereference kro
    (*ptr).getdata();

    //array of objects
    complex *pt = new complex[4];
    pt->setdata(1,2);
    pt->getdata();    
    return 0;
}