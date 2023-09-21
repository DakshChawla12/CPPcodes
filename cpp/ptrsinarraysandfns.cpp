#include<iostream>
using namespace std;
int main(){
    // int arr[10] = {2,5,6};
    // cout<<"address of 1st block is "<<arr<<endl;
    // cout<<"address of 1st block is "<<&arr[0]<<endl;
    // cout<<"1st val "<<*arr<<endl;
    // cout<<"1st val "<<*(arr+1)<<endl;
    // int i = 2;
    // cout<<i[arr]<<endl; // will give value at index number 2

    int arr[5];
    char ch[6] = "abcde";

    cout<<ch<<endl; 
    char *p = &ch[0];
    cout<<p<<endl;
return 0;
}