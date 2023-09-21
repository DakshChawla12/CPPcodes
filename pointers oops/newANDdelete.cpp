#include<iostream>
using namespace std;
int main(){
    int a =4;
    int*ptr = &a;
    // cout<<ptr;
    // new operator*********
    // int *p = new int(40);
    float *p = new float(40.43578);
    // cout<<*(p);
    // dynamically allocated array
    int *arr = new int[3];
    arr[0]= 10;
    arr[1]= 19;
    arr[2]= 15;
    delete [] arr;
    cout<<"the val of arr[0] is : "<<arr[0]<<endl;
    cout<<"the val of arr[0] is : "<<arr[1]<<endl;
    cout<<"the val of arr[0] is : "<<arr[2]<<endl;
    //delete operator**********


return 0;
}