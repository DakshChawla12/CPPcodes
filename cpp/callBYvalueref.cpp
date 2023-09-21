#include<iostream>
using namespace std;
// call by value
void swap(int a,int b){ // this will not swap
    int temp =a;
    a=b;
    b=temp;
}
// call by reference 
void swapPointer(int*a,int*b){//this will work
    int temp=*a;
    *a=*b;
    *b=temp;
}
// call by reference using reference variable
void swapRefVar(int &a,int &b){
    int temp =a;
    a=b;
    b=temp;
}
int main(){
    int x=4,y=5;
    cout<<"value of x is " <<x<<" and value of y is "<<y<<endl;
    // swap(x,y);// this will not swap
    // cout<<"value of x is " <<x<<" and value of y is "<<y<<endl;
    // swapPointer(&x,&y);//this will swap
    // cout<<"value of x is " <<x<<" and value of y is "<<y<<endl;
    swapRefVar(x,y);
    cout<<"value of x is " <<x<<" and value of y is "<<y<<endl;
    return 0;
}