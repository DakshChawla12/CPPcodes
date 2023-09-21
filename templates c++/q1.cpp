#include<iostream>
using namespace std;
template <class t1, class t2>
class findSum{
    public:
    t1 A;
    t2 B;

    findSum(t1 num1 ,t2 num2){
         
        A = num1;
        B = num2;

        
    }
    void dispalay(){
        cout<<"your sum is : "<<A+B;
    }

};
int main(){
    
    findSum <int ,int> obj(56,8);
    obj.dispalay();
return 0;
}