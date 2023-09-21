#include<iostream>
using namespace std;
template <class t>
class vector{
//jidhr bhi t likha h uska datatype baad m specify hoga
    public:
    t *arr;
    int size;
    vector(int m){
        size = m;
        arr = new t[size];
    }
    t dotProduct(vector &v){
        t d = 0;
        for(int i = 0;i <size; i++){
            d += this->arr[i] * v.arr[i];
            return d;
        }
    }
};
int main(){
    // vector v1(3); //vector 1
    // v1.arr[0] = 4;
    // v1.arr[1] = 3;
    // v1.arr[2] = 1;
    // vector v2(3); //vector 2
    // v2.arr[0]=1;
    // v2.arr[1]=0;
    // v2.arr[2]=1;
    // int a = v1.dotProduct(v2);

    vector <float> v1(3);
    v1.arr[0] = 42.3;
    v1.arr[1] = 3.6;
    v1.arr[2] = 2.87;
    vector <float> v2(3);
    v2.arr[0] = 4;
    v2.arr[1] = 5.1;
    v2.arr[2] = 1.4;
  int a =  v1.dotProduct(v2);
  cout<<a<<endl;
return 0;
}