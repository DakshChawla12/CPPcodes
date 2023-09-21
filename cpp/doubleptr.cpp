#include <iostream>
using namespace std;
void update(int **p2){
    //p2 = p2+1;   // this updates the value in this fn only as it is passed by value in this case   

  //  *p2 = *p2+1; // will update the value of pointer p in main fn

   **p2 = **p2+1; // will update value of num1 in main function
}
int main(){

int num1 = 5;
int * p = &num1;
int ** p2 = &p;

// cout<<i<<endl<<p<<endl<<p2<<endl;//will give i,address of i,adress of pointer p

// cout<<*p<<endl<<*p2<<endl;//will give value at which p and p2 are pointing
// cout<<**p2<<endl;//will give value of i

// ****function call****
cout<<"before "<<num1<<endl;
cout<<"before "<<p<<endl;
cout<<"before "<<p2<<endl;
update(p2);
cout<<endl;
cout<<"after "<<num1<<endl;
cout<<"after "<<p<<endl;
cout<<"after "<<p2<<endl;
return 0;

}