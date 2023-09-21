#include <iostream>
using namespace std;
// function to print nth fibonacci number
// int fibo(int n){
//     if(n == 0){
//         return 0;
//     }
//     else if(n == 1){
//         return 1;
//     }
//     return fibo(n-1) + fibo(n-2);
// }
// ***********************************
//function to find number of different ways to climb n stairs
// int countDistinctWays(int nStairs) {
//     if(nStairs < 0){
//         return 0;
//     }
//     else if (nStairs == 0){
//         return 1;
//     }
//    return countDistinctWays(nStairs-1)+countDistinctWays(nStairs-2);
// }
//****************************************

void saydigit(int n, string arr[]){
    if(n == 0){
        return;
    }
    //processing part
    int digit = n%10;
    n=n/10;
    
    //recursive call
    saydigit(n,arr);
    
    cout<<arr[digit]<<" ";
}
int main(){
    int n;
    cout<<"enter a number : ";
    cin>>n;
    string arr[10] = {"zero","one","two","three","four",
                      "five","six","seven","eight","nine"};
    // calling 1st fn
    // int ans = fibo(n);
    // cout<<"nth fibonacci number is : "<<ans;


    //calling 2nd fn
    // int ans = countDistinctWays(n);
    // cout<<"the number of ways are : "<<ans;

    //calling 3rd fn
    
    saydigit(n,arr);
    
return 0;

}