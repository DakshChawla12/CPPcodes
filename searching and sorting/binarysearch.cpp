#include<iostream>
using namespace std;

int binarysearch(int arr[], int size, int key){

    int start = 0;
    int end = size -1;
   //   can get error if the value of mid get bigger than int limit int mid = (start+end)/2;

    // optimised version
     int mid = start + (end-start)/2;
    while(start <= end){
        if(arr[mid] == key){
            return mid;
        }
        //go to right part
        if(key > arr[mid]){
            start = mid+1;
        }
        else{
            end = mid -1;
        }
        mid =  start + (end-start)/2;
    }
    return -1;
}

int main(){
    int even[6] = {2,4,6,8,12,18};
    int odd [5] = {3,8,11,14,16};

    int evenindex = binarysearch(even, 6, 52);
    int oddindex = binarysearch(odd, 5, 3);

    cout<<"index of 12 is : "<<evenindex<<endl;
    cout<<"index of 8 is : "<<oddindex;
return 0;
}