#include <iostream>
using namespace std;
//function to check if an array is sorted or not
// bool isSorted(int arr[],int size){
//     
//     if(size == 0 || size == 1){ //base case
//         return true;
//     }
//     //solve one case
//     if(arr[0] > arr[1]){
//         return false;
//     }
//     //check for remaining part using recursive call
//     else{
//         bool remainingPart = isSorted(arr+1,size-1);
//         return remainingPart;
//     }
// }
//*********************************************************
//function to find sum of all elements of an array using recursion
// int findSum(int arr[],int size){
//     if(size == 0){ //base case
//         return 0;
//     }
//     if(size == 1){ // 2nd part of base case
//         return arr[0];
//     }

//     int remainingpart = findSum(arr+1,size-1);
//     int sum = arr[0] + remainingpart;
//     return sum;
// }
//***************************************************
//function to do linear search using recursion
// bool search(int arr[],int size,int key){
//     if(size == 0){ //base case
//         return false;
//     }
//     if(arr[0] == key){
//         return true;
//     }
//     else{
//         bool remainingpart = search(arr+1,size-1,key);
//         return remainingpart;
//     }

// }
bool binarysearch(int arr[], int s, int e, int k){

    if(s>e){ //base case for element not found
        return false;
    }
    int mid = s+(e-s)/2;
   // cout<<"element is found at index : "<<arr[mid]<<endl;
    if(arr[mid] == k){ // base case if element is found
        return true;
    }
    if(arr[mid] < k){
        return binarysearch(arr,mid+1,e,k);
    }
    else{
        return binarysearch(arr,s,mid-1,k);
    }

}
int main(){


//***first function call
//     bool ans = isSorted(arr,size);
//    if(ans){
//     cout<<"your array is sorted";
//    }
//    else{
//     cout<<"your array is not sorted";
//    }


//***second function call
    // int ans = findSum(arr,size);
    // cout<<ans;


//***third function call
    // bool isPresent = search(arr,size,key);
    // if(isPresent){
    //     cout<<"yes it is present";
    // }
    // else{
    //     cout<<"no it is not present";
    // }


    int arr[5] = {1,2,3,4,5};
    int size = 5;
    
//***fourth function call
     cout<<"present or not : "<<binarysearch(arr,0,5,4);
    
    return 0;

}