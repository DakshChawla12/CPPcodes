#include<iostream>
#include<vector>

using namespace std;
template <class t>
void display(vector <t> &v){
    for (int i = 0; i < v.size(); i++){
        cout<<v[i]<<" ";
       // cout<<v.at(i)<<" ";
    }
    cout<<endl;
    
}
int main(){
    //ways to create vector
    vector <int> vec1; //zero length  integer vector
    vector<char> vec2(4); //four element char vector
    // vec2.push_back('5');
    // display(vec2);
    vector<char> vec3(vec2); //four element char vector from vec2
    // display(vec3);
    vector <int> vec4(6,3);//6- element vector of 3s
    display(vec4);
    int size = 5,element;
    // cout<<"enter the size of vector"<<endl;
    // cin>>size;
    
    // for(int i = 0; i < size; i++){
    //     cout<<"enter an element to add to this vector : ";
    //     cin>>element;
    //     vec1.push_back(element);
    // }
    //vec1.pop_back();  deletes last element
   
    // display(vec1);
    // vector<int> :: iterator iter = vec1.begin();
    // // vec1.insert(iter,566);
    // // display(vec1);
   
    // display(vec1);
    return 0;
}