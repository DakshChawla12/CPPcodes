#include<iostream>
using namespace std;
class complex{
    int a;
    int b;
    public:
    void setDATA(int v1,int v2){
        a=v1;
        b=v2;
    }
    void setDATAbysum(complex o1,complex o2){
        a=o1.a+o2.a;
        b=o1.b+o2.b;
    }
    void printNUMBER(){
        cout<<"your complex number is "<<a<<"+i"<<b<<endl;
    }
};
int main(){
    complex c1,c2,c3;
    c1.setDATA(1,2);
    c1.printNUMBER();
    c2.setDATA(3,4);
    c2.printNUMBER();
    c3.setDATAbysum(c1,c2);
    c3.printNUMBER();
return 0;
}