#include <iostream>
using namespace std;
//*****quick sprt using recursion*********
int partition(int arr[], int s, int e){

    int pivot = arr[s];

    int count = 0;
    for(int i = s+1; i <= e; i++){
        if(arr[i] <= pivot){
            count++;
        }
    }
    //placing pivot element at right position
    int pivotindex = s+count;
    swap(arr[pivotindex],arr[s]);

    //left and right part
    int i = s,j = e;
    while(i < pivotindex && j > pivotindex){
        while(arr[i] <= pivot){
            i++;
        }

        while(arr[j] > pivot){
            j--;
        }

       if(i < pivotindex && j > pivotindex){
        swap(arr[i++],arr[j--]);
       }
    }
    return pivotindex;
}

void quicksort(int arr[],int s,int e){
    //base case
    if(s>=e){
        return;
    }
    //partition
    int p = partition(arr,s,e);

    //solving left part
    quicksort(arr,s,p-1);
    //solving right part
    quicksort(arr,p+1,e);
}
int main(){

    int arr[8] = {2,4,1,6,9,3,3,3};
    int n = 8;
    quicksort(arr,0,n-1);


    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;

}
