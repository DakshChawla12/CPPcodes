#include <iostream>
using namespace std;
//*****merge sort using recursion*******
void merge(int arr[],int s,int e){


    int mid = s+(e-s)/2;

    int len1 = mid - s+1;
    int len2 = e -mid;

    int*first = new int[len1];
    int*second = new int[len2];
    //copying values
    int mainarrayindex = s;
    for(int i = 0; i < len1; i++){
        first[i] = arr[mainarrayindex++];
    }

     mainarrayindex = mid+1;
    for(int i = 0 ; i < len2; i++){
        second[i] = arr[mainarrayindex++];
    }

    //merge
    int index1 = 0;
    int index2 = 0;
    mainarrayindex = s;
    while(index1 < len1 && index2 < len2){
        if(first[index1] < second[index2]){
            arr[mainarrayindex++] = first[index1++];
        }
        else{
            arr[mainarrayindex++] = second[index2++];
        }
    }

    while(index1 < len1){
        arr[mainarrayindex++] = first[index1++];
    }
    while(index2 < len2){
        arr[mainarrayindex++] = second[index2++];
    }
    
    delete []first;
    delete []second;
}


 void mergesort(int arr[], int s, int e){
    //base case
    if(s>=e){
        return;
    }
    int mid = s+(e-s)/2;
    //sort left part
    mergesort(arr,s,mid);
    //sort right part
    mergesort(arr,mid+1,e);

    //merging arrays
    merge(arr,s,e);
}


int main(){
    int arr[5] = {3,5,1,2,4};
    int n = 5;
    mergesort(arr,0,n-1);
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
return 0;

}
