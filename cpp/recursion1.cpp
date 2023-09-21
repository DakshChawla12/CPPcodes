#include <iostream>
using namespace std;
//function to find factorial
// int fact(int n){
//     if(n == 0){ /// base case
//         return 1;
//     }
//     else{
//         return n * fact(n-1);
//     }
// }

// function to find 2 raised to power n
// int power(int n){
//     if(n == 0){
//         return 1;
//     }
//     // int smallerprob = power(n-1);
//     // int biggerprob = 2 * smallerprob;

//     return 2 * power(n-1);
// }

// function to print counting
void print(int n){
    if(n == 0){
       return;
    }
    print(n-1); // if function is called before printing then numbers are printed in ascending order
    cout<<n<<endl;
}
int main(){
    int n;
    cout<<"enter a number : ";
    cin>>n;
    cout<<endl;
    /*int ans = fact(n);
    cout<<"factorial of given number is : "<<ans;
    */
//    int ans = power(n);
//    cout<<"2 raised to the power given number is : "<<ans;
    print(n);

return 0;

}