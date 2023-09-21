#include<iostream>
#include<vector>
using namespace std;
// using nested for loop
void insertionSort2(int n,vector <int> &v){
    
    for(int i = 1; i < n; i++){
        int temp = v[i];
        int j = i-1;
        for(; j >= 0; j--){
            if(v[j] > temp){
                v[j+1] = v[j];
            }
            else{
                break;
            }
        }
        v[j+1] = temp;
    }
}

// using nested while loop
void insertionSort(vector <int> &v){
    int n = v.size();

    for(int i = 1; i < n; i++){
        int currentElement = v[i];
        // find the correct position for our current element
        int j = i - 1;
        while(j >= 0 && v[j] > currentElement){
            v[j+1] = v[j];
            j--;
        }
        // insert current element
        v[j+1] = currentElement;

    }
    return;
}

int main(){
    int n;
    cout<<"enter the size of vector : ";
    cin>>n;
    
    vector <int> v(n);
    for(int i = 0; i < n; i++){
        cin>>v[i];
    }

    insertionSort2(n,v);

    for(int i = 0; i < n; i++){
        cout<<v[i]<<" ";
    }
return 0;
}