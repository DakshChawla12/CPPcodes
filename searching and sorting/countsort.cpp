#include<iostream>
#include<vector>

using namespace std;

void countSort(vector <int> &v){
int n = v.size();

//finding the max element
int max_ele = -100;
for(int i = 0; i < n; i++){
    max_ele = max(v[i],max_ele);
}

//create the frequency vector
vector <int> freq(max_ele+1,0);
for(int i = 0; i < n; i++){
    freq[v[i]]++;
}
//calculate cumulative freq
for(int i = 1; i <= max_ele; i++){
    freq[i] += freq[i-1];
}
//calculate the sorted vector
vector <int> ans(n);
for(int  i = n-1; i >= 0; i--){
    ans[--freq[v[i]]] = v[i];
}
//copy back the ans arr to original array
for(int i = 0; i < n; i++){
    v[i] = ans[i];
}

}

int main(){
    int n;
    cout<<"enter the size of vector : ";
    cin>>n;

    vector <int> a(n);
    for(int i = 0; i < n; i++){
        cin>>a[i];
    }
    countSort(a);
    for(int i = 0; i < n; i++){
        cout<<a[i]<<" ";
    }

return 0;
}