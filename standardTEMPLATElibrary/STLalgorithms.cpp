#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){

    vector <int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    cout<<"before rotate : ";
    for(int i: v){
        cout<<i<<" ";
    }cout<<endl;

    rotate(v.begin(),v.begin()+1,v.end());
    cout<<"after rotate : ";
    for(int i: v){
        cout<<i<<" ";
    }

    cout<<"finding 4 : "<<binary_search(v.begin(),v.end(),4)<<endl;
    cout<<"finding 6 : "<<binary_search(v.begin(),v.end(),6)<<endl;

    cout<<"lower bound : " << lower_bound(v.begin(),v.end(),3)-v.begin()<<endl;
    cout<<"upper bound : " << upper_bound(v.begin(),v.end(),3)-v.begin()<<endl;



    int a = 3, b = 5;
    cout<<max(a,b)<<endl;
    cout<<min(a,b)<<endl;

    swap(a,b);
    cout<<a<<" "<<b<<endl;

    string s = "abcde";
    reverse(s.begin(),s.end());
    cout<<"string -->"<<s;
    return 0;
}