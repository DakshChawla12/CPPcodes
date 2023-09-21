/*
synatx for initialization list in cons
constructor (args list) : initialization section{
    assingnment + other code;
}
example-->>
class test{
    int a,b;
    public:
    test(int i,int j) : a(i),b(j)
};
*/
#include<iostream>
using namespace std;
class test{
    public:
    int a,b;
    //test(int i,int j) : a(i),b(i+j){
    test(int i,int j) : b(j),a(i+b){  //--> garbage val as a is declared 1st in class

        cout<<"cons is called"<<endl;
        cout<<"the value of a is : "<<a<<endl;
        cout<<"the value of b is : "<<b<<endl;
    }
};
int main(){
    test(4,6);
return 0;
}