#include<iostream>
using namespace std;
// float funcAverage(int a, int b){
//     float avg = (a+b)/2.0;
//     return avg;
// }

template <class t1, class t2>
float funcAverage2(t1 a, t2 b){
    float avg = (a+b)/2.0;
    return avg;
}
int main(){
    float a;
    a = funcAverage2(5,2);
    cout<<a;
return 0;
}