#include <iostream>
using namespace std;

// int& func(int a){ // bad practice as the var have scope only inside the function
//     int num  = a;
//     int & ans = a;
//     return ans;
// }




// void update1(int n){//will not change value as a copy is created in this fn only and the value is changed in this function only not in main
//     n++;
// }
// void update2(int &n){ // will increase as it is pointing to already created memory in main function
//     n++;
// }
int getsum(int *arr,int n){
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum = sum + arr[i];
    }
    return sum;
}
int main(){

   // int i = 5;
    //create a reference variable
    // int &j = i;
    // //now i and j are same (have same memory)
    // cout<<i<<endl;
    // i++;
    // cout<<i<<endl;
    // j++;
    // cout<<i<<endl;

    // calling update 1
    // cout<<"before update 1 : "<<i<<endl;
    // update1(i);
    // cout<<"after update 1 : "<<i<<endl;
    // //calling update 2
    // cout<<"before update 2 : "<<i<<endl;
    // update2(i);
    // cout<<"after update 2 : "<<i<<endl;

   // func(i);


//    char ch = 'q';
//    cout<<sizeof(ch)<<endl;//1 byte

//    char *c = &ch;
//    cout<<sizeof(c)<<endl; // 8 bytes

// ********* creating a variable size array using dynamic memory allocation(heap)

int n;
cin>>n;

int *arr = new int[n]; // array created using heap
for(int i = 0; i < n; i++){
    cin>>arr[i];
}
int ans = getsum(arr,n);
cout<<"the sum is : "<<ans<<endl;

return 0;
}