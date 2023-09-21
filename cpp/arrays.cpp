#include<iostream>
using namespace std;
int main(){
 int n;
 cout<<"enter array size:";
 cin>>n;
 int arr[n];
 
 for(int i=0;i<n;i++){
    cout<<"enter element number"<<i+1<<":";
    cin>>arr[i];
 }
 for(int i=0;i<n;i++){
    if(arr[i]>arr[0]){
        arr[0]=arr[i];
    }
 }
 cout<<arr[0];
   
    return 0;
}