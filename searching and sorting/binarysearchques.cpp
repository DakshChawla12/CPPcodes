/*
find firts and last occurence of given key
*/

#include<iostream>
using namespace std;
int firstoccurence(int arr[], int size, int key){
    int s = 0, e = size-1;
    int mid = s+(e-s)/2;
    int ans = -1;

    while(s<=e){
        if(arr[mid] == key){
            ans = mid;
            e = mid -1;
        }
         else if(key > arr[mid]) {//Right me jao
            s = mid + 1;
        }
        else if(key < arr[mid]) {//left me jao
            e = mid - 1;
        }
         mid = s+(e-s)/2;
    }
    return ans;
}

int lastoccurence(int arr[], int size, int key){
    int s = 0, e = size-1;
    int mid = s+(e-s)/2;
    int ans = -1;

    while(s<=e){
        if(arr[mid] == key){
            ans = mid;
            s = mid + 1;
        }
         else if(key > arr[mid]) {//Right me jao
            s = mid + 1;
        }
        else if(key < arr[mid]) {//left me jao
            e = mid - 1;
        }
         mid = s+(e-s)/2;
    }
    return ans;
}



int main(){
    int odd[5] = {1,3,3,3,4};
    int first = firstoccurence(odd,5,3);
    int last = lastoccurence(odd,5,3);
    cout<<"first occurence of 3 is at index : "<<first<<endl;
    cout<<"last occurence of 3 is at index : "<<last<<endl;

    int total = (last -first)+1;
    cout<<"total occurences of 3 is : "<<total;
return 0;
} 