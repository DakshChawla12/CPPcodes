#include<iostream>
using namespace std;
template <class t1 = int, class t2 = float, class t3 = char >
class harry{
    public:
    t1 a ;
    t2 b ;
    t3 c;
    harry(t1 num1,t2 num2,t3 z){
        a = num1;
        b = num2;
        c = z;
    }
    void display(){
        cout<<"the value of a is : "<<a<<endl;
        cout<<"the value of b is : "<<b<<endl;
        cout<<"the value of c is : "<<c<<endl;
    }
};
int main(){
    harry <> h(4 , 7.9 ,'A');
    h.display();
    cout<<endl;
    harry <float , char ,char> g(4.67 , 'B' ,'A');
    g.display();
return 0;
} 