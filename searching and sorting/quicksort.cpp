#include<iostream>
using namespace std;

int partition(int arr[],int first, int last){
    int pivot = arr[last];
    int i = first-1;//for inserting elements < pivotvot
    int j = first;//for finding elements < pivotvot

    for(;j < last; j++){
        if(arr[j] < pivot){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    //now i is pointing to last element < pivot 
    // corretct position for pivot will be i+1
    swap(arr[i+1],arr[last]);
    return i+1;
}


void quickSort(int arr[], int first, int last){
    if(first >= last){
        return;
    }

    int pivot = partition(arr,first,last);
    quickSort(arr,first,pivot-1);
    quickSort(arr,pivot+1,last);
}

int main(){
    int arr[] = {20,12,35,16,18,30};
    int n = sizeof(arr)/sizeof(arr[0]);

    quickSort(arr,0,n-1);

    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
return 0;
}