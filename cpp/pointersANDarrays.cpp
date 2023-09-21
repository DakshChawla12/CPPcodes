#include<iostream>
using namespace std;
int main(){
    int marks[]={1,7,3,4,5};
    int*p=marks;
    cout<<*(++p)<<endl;
    cout<<"the value of marks[0] is:"<<*(p+1);
    return 0;
}