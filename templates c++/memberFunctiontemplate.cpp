#include<iostream>
using namespace std;
template <class t>
class harry{
    public:
    int data;
    harry(t a){
        data = a;
    }
    void display();
};
template <class t>
void harry <t> :: display(){
    cout<<data<<endl;
}

void func(int a){
    cout<<"i am first func()"<<a<<endl;
}
template <class t>
void func1(t a){
    cout<<"i am templatised func()"<<a<<endl;
}
int main(){
    // harry <int> h(5);
    // h.display();
    func(4);
    func1(4.67890);
return 0;
}