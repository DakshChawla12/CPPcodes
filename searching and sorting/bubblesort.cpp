#include<iostream>
#include<vector>
using namespace std;
/* optimized code for nearly shuffled array*/
void optbubblesort(vector<int> &v){
    int n = v.size();
    for(int i = 0; i < n-1; i++){
        bool flag = false;
        for(int j = 0; j < n-i; j++){
            if(v[j] > v[j+1]){
                flag = true;
                swap(v[j],v[j+1]);
            }
        }
        if(!flag){
            break;
        }
    }
    return;
}
//************************************************
// void bubblesort(vector<int> &v){
//     int n = v.size();
//     for(int i = 0; i < n-1; i++){
//         for(int j = 0; j < n-i; j++){
//             if(v[j] > v[j+1]){
//                 swap(v[j],v[j+1]);
//             }
//         }
//     }
//     return;
// }

int main(){
    int n;
    cout<<"enter size of vector : ";
    cin>>n;

    vector <int> v(n);
    for(int i = 0; i < n; i++){
        cin>>v[i];
    }
    optbubblesort(v);
    for(int i = 0; i < n; i++){
        cout<<v[i]<<" ";
    }cout<<endl;

return 0;
}