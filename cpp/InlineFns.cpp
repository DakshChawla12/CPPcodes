#include<iostream>
using namespace std;
inline int prod(int x,int y){
    return x*y;
}
float moneyrecieved(int money,float interestFactor=1.04){
    return money*interestFactor;
}
int main(){
    int a,b;
    // cin>>a>>b;
    // cout<<prod(a,b)<<endl;
    // cout<<prod(a,b)<<endl;
    // cout<<prod(a,b)<<endl;
    // cout<<prod(a,b)<<endl;
    // cout<<prod(a,b)<<endl;
    int x=100000,y=1.1;
    cout<<"if you have Rs "<<x<<" then you will recieve Rs "<<moneyrecieved(x);    
    return 0;

}