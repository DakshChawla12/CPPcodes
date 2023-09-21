#include<iostream>
using namespace std;
class simple{
    int data,data2;
    public:
    simple(int a,int b=9){
        data =a;
        data2=b;
    }
    void printdata();
};
 void simple :: printdata(){
    cout<<"the value of data is "<<data<<" , "<<data2<<endl;
}
int main(){
    simple s(1);
    s.printdata();
return 0;
}