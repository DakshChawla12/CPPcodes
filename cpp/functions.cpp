#include<iostream>
using namespace std;
//  int sum(int a,int b){
//      int c=a+b;
//      return c;
//  }

// **********function prototype*************
 int sum(int a,int b);//acceptable    
// int sum(int a,b);//not acceptable
// int sum(int,int);//acceptable

int main(){
    int n1,n2;
    n1=26;
    n2=400;
    int d=sum(n1,n2);
    cout<<d;
    
    return 0;
}
 int sum(int a,int b){
     int c=a+b;
     return c;
}