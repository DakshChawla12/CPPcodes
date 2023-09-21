#include<iostream>
#include<functional>
#include<algorithm>
using namespace std;
/*function objects(functor) : function wrapped in a class so that it 
is availiable as object*/
int main(){
    int arr[] = {1,33,14,12,554,77};
    sort(arr,arr+5);//sirf 5th element tk hoga sort
    sort(arr,arr+6,greater<int>());
    for ( int i = 0; i < 6; i++)
    {
        cout<<arr[i]<<endl;
    }
    
return 0;
}