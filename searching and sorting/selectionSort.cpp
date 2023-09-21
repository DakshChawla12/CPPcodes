#include<iostream>
#include<vector>
using namespace std;

void selectionsort(vector <int> &v){
    int n = v.size();

    for(int i = 0; i < n-1; i++){
        int min_idx = i;
        for(int j = i + 1; j < n; j++){
            if(v[j] < v[min_idx]){
                min_idx = j;
            }
        }
        if(i != min_idx){
            swap(v[i],v[min_idx]);
        }
    }
}
// to sort in descending order
void selectionsort1(vector <int> &v){
    int n = v.size();

    for (int i = 0; i < n - 1; i++) {
        int max_index = i;
        for (int j = i + 1; j < n; j++) {
            if (v[j] > v[max_index]) {
                max_index = j;
            }
        }
        if( i != max_index){
            swap(v[i],v[max_index]);
        }
}
}

int main(){
    int n;
    cout<<"enter the size of vector : ";
    cin>>n;
    vector<int> v(n);

    for(int i = 0; i < n; i++){
        cin>>v[i];
    }

    selectionsort1(v);
    
    for(int i = 0; i < n; i++){
        cout << v[i]<<" ";
    }
return 0;
}