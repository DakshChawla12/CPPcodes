#include<iostream>
using namespace std;
class base{
    protected:           //private but can be inheritable
    int a;
    private:
    int b;
};
/* for a protected member:
                          <public declaration>   <private decl>      <protected decl>
1) private members -->    not inherited          not inherited       not inherited
2) protected members -->  protected              private             protected
3) public members -->     public                 private             protected
*/
class derived : protected base{
    
};
int main(){
    base b;
    derived d;
    cout<<d.a; /* will not work
     since a is in protected mode in both base and derived class*/
return 0;
}