/*q1 ) given an integer array move all the zeroes to the end 
while mainting relative order of non-zeroes elements
*/
/*
space complexity = O(1)
time complexity = O(n^2)
*/
#include<iostream>
#include<vector>
using namespace std;
void swapZeroesToEnd(vector <int> &v){
    int n = v.size();

    for(int i = n-1; i >= 0; i--){
        int j = 0;
        bool flag = false;
        while(j != i){
            if(v[j] == 0 && v[j+1] != 0){
                swap(v[j],v[j+1]);
                flag = true;
            }
            j++;
        }
        if(!flag){
            break;
        }
    }
    return;
}
int main(){
    int n;
    cout<<"enter size of vector : ";
    cin>>n;
    vector <int> v(n);
    for(int i = 0; i < n; i++){
        cin>>v[i];
    }

    swapZeroesToEnd(v);

    for(int i = 0; i < n; i++){
        cout<<v[i]<<" ";
    }
return 0;
}