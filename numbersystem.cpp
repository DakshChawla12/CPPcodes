#include <iostream>
#include <math.h>
using namespace std;

int main(){
//decimal to binary code --> 
    // int n;
    // cin>>n;

    // int ans = 0,i = 0;
    // while(n!=0){
    //     int digit = n & 1; // getting last digit and checking if it is 1 or 0
        
    //     ans = (digit * pow(10,i)) + ans;

    //     n = n>>1; // right shifting to get the next digit 
    //     i++;
    // }
    // cout<<"ans is : "<<ans;


    //binary to decimal -->
    int n;
    cin>>n;

    int i = 0,ans = 0;
    while(n!=0){
        int digit = n % 10; // getting the last digit

        if(digit == 1){ // multiplying with power of 2 if the last digit is 1
            ans = ans + pow(2,i);
        }

        n = n / 10 ; // right shifting
        i++;


    }
    cout<<"ans is : "<<ans;


    return 0;

}