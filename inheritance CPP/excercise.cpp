#include <iostream>
#include <cmath>
using namespace std;
//*********simplecalc class**********
class simplecalc
{
    public:
     int a, b;
    void setSimpleval(int x, int y);
    int process(int n1, int n2);
    void display();
    
};

void simplecalc ::setSimpleval(int x, int y)
{
    cout << "enter value of A and B" << endl;
    cin >> x >> y;
    a = x;
    b = y;
}

int simplecalc ::process(int n1, int n2)
{
    cout << "what operation do you want to perform ? " << endl;
    char ch;
    cin >> ch;
    if (ch == '+')
    {
        cout << "sum is : " << a + b << endl;
    }
    else if (ch == '-')
    {
        cout << "difference is : " << a - b << endl;
    }
    else if (ch == '*')
    {
        cout << "prooduct is : " << a * b << endl;
    }
    else if (ch == '/')
    {
        cout << "quotient is : " << a / b << endl;
    }
    else
    {
        cout << "invalid operation" << endl;
    }
}

//******scientific calc class*************
class scientificCalc
{
private:
    int a, b;

public:
    void setScientificval(int x,int y);
    int performops(int n1,int n2);
    
};

// void scientificCalc ::setScientificval(int x,int y)
// {
//     cout << "enter value of A and B" << endl;
//     cin >> x >> y;
//     a = x;
//     b = y;
// }
int scientificCalc ::performops(int n1,int n2)
{
    cout<<"sine of a and b are : "<<sin(a)<< sin(b)<<endl;
    cout<<"cosine of a and b are : "<<cos(a)<< cos(b)<<endl;
    // cout<<"a raised to power b is : "<<sqrt(a)<<sqrt(b)<<endl;
    cout<<"tan of a and b are : "<<tan(a)<< tan(b)<<endl;
}

class hybridCalc : public simplecalc, public scientificCalc{
    public:
    int a1,b1;
     void getvalues(int a1,int b1){
         setSimpleval(a1,b1);
         //setScientificval(a1,b1);
         process(a1,b1);
         performops(a1,b1);
     }

    

};


int main()
{
    int num1,num2;
    hybridCalc c1;
    c1.getvalues(num1,num2);
   // c1.process(num1 , num2);
    return 0;

}
/* create 2 classes
  1) simple calc --> takes input of 2 numbers and performs + - * /
  2) scientific calc --> performs 4 scientific operations
  3) create another class hybrid calc
*/