#include <iostream>
#include <array> //library for stl array
#include <vector>//library for stl vectors
#include <deque>//library for stl deque
#include <list>//library for stl lists
#include <stack>//library for stl stacks
#include <queue>//library for stl queue and priority queue
#include <set>//library for stl sets
#include <map>//library for stl maps

using namespace std;

int main(){
    //STL arrays*******************************************
    // array <int,4> a = {1,2,3,4}; // arrays are static
    // int size = a.size();
    // for(int i = 0; i < size; i++){
    //     cout<<a[i]<<" ";
    // }
    // cout<<endl;
    // cout<<"element at 2nd index : "<<a.at(2)<<endl;
    // cout<<"empty or not : "<<a.empty()<<endl;
    // cout<<"first element : "<<a.front()<<endl;
    // cout<<"last element : "<<a.back()<<endl;

//******************************************************************************************

    //STL vectors***************************************
    // initialization of vector when we know the size
    // vector <int> a(5);   //here 5 is the size 

    // vector <int> v;

    // vector<int> last(v); // copies all the element from vector v
    // v.push_back(1);
    // v.push_back(2);
    // v.push_back(3);
    // v.push_back(4);
    // cout<<"size : "<<v.capacity()<<endl;  //capacity tells for how many elements the memory has been allocated
    // cout<<"number of elements : "<<v.size()<<endl; // size gives us the number of elements
    // cout<<"element at 2nd index : "<<v.at(2)<<endl;
    // cout<<"first element : "<<v.front()<<endl<<"last element : "<<v.back()<<endl;


    // for(int i = 0; i < v.size(); i++){
    //     cout<<v[i]<<" ";
    // }
    // cout<<endl;


    // v.pop_back(); //removes last element

    // for(int i = 0; i < v.size(); i++){
    //     cout<<v[i]<<" ";
    // }



    // cout<<"size and number of elements before clearing "<<endl;
    // cout<<"size : "<<v.capacity()<<endl;  
    // cout<<"number of elements : "<<v.size()<<endl;

    // v.clear(); // remove all the elements
    // cout<<"size and number of elements after clearing "<<endl;
    // cout<<"size : "<<v.capacity()<<endl;  
    // cout<<"number of elements : "<<v.size()<<endl;

//******************************************************************************************

// STL deque  (doubly ended queue)
// can perform operations like deletion and insertion at both the beginning 
//and at the end

    // deque <int> d;
    // d.push_back(1); // insertion at last
    // d.push_front(2);// insertion at front
    // // for(int i = 0; i < 2; i++){
    // //     cout<<d[i]<<" ";
    // // }
    // // cout<<endl;
    // //d.pop_back(); //removes 1
    // //d.pop_front(); //removes 2
    // // for(int i: d){
    // //     cout<<i<<" ";
    // // }

    // cout<<"element at index one  : "<<d.at(1)<<endl;
    // cout<<"first element : "<<d.front()<<endl<<"last element : "<<d.back()<<endl;

    // cout<<"empty or not : "<<d.empty()<<endl;

    // cout<<"before erase : "<<d.size()<<endl;
    // d.erase(d.begin(),d.begin()+1); // start from begin and delete the next element after begin
    // cout<<"after erase : "<<d.size();

//******************************************************************************************

//STL LISTS
// direct access not possible we have to traverse to the element to access it

    // list <int> l;
    // list <int> n(l); // copying a list
    // list <int> l1(5,100); // creates a list of 5 elements which are all 100
    // l.push_back(1);
    // l.push_front(2);


    // // cout<<"before erase : "<<endl;
    // for(int i: l1){
    //     cout<<i<<" ";
    // }
    // cout<<endl;

    // //l.erase(l.begin());
    // // cout<<"after erase : "<<endl;
    // // for(int i: l){
    // //     cout<<i<<" ";
    // // }

    // cout<<"number of elements : "<<l.size();

//******************************************************************************************

//STL STACKS // it follows the concept of last in first out
    // stack <string> s;
    // s.push("apple");
    // s.push("mango");
    // s.push("banana");

    // cout<<"size of stack : "<<s.size()<<endl;
    // cout<<"top element : "<<s.top()<<endl;

    // s.pop();

    // cout<<"top element after popping : "<<s.top()<<endl;
    // cout<<"size of stack after popping: "<<s.size()<<endl;

    // cout<<"empty or not : "<<s.empty();

//******************************************************************************************

//STL QUEUES // it follows the concept of first in first out
    // queue <string> q;

    // q.push("apple");
    // q.push("mango");
    // q.push("banana");

    // cout<<"number of elements : "<<q.size()<<endl;
    // cout<<"first element : "<<q.front()<<endl;
    // q.pop();
    // cout<<"first element after popping : "<<q.front()<<endl;
    // cout<<"number of elements after popping: "<<q.size()<<endl;

//******************************************************************************************

//STL PRIORITY QUEUE   (based on max heap)
    // creating a maximum heap
    // priority_queue <int> maxi;

    // //creating a minimum heap
    // priority_queue <int,vector<int> , greater<int>> mini;

    // maxi.push(1);
    // maxi.push(3);
    // maxi.push(2);
    // maxi.push(4);
    // cout<<"number of elements : "<<maxi.size()<<endl;
    
    // for(int i = 0; i  < maxi.size(); i++){
    //     cout<<maxi.top()<<" ";
    // }cout<<endl;

    // int n = maxi.size();
    // for(int i = 0; i  < n; i++){
    //     cout<<maxi.top()<<" ";
    //     maxi.pop();
    // }cout<<endl;

    // mini.push(5);
    // mini.push(3);
    // mini.push(1);
    // mini.push(4);
    // mini.push(0);

    // for(int i = 0; i  < mini.size(); i++){
    //     cout<<mini.top()<<" ";
    // }cout<<endl;


    // for(int i = 0; i  < mini.size(); i++){
    //     cout<<mini.top()<<" ";
    //     mini.pop();
    // }cout<<endl;

//******************************************************************************************

//STL SET
    // set <int> s;
    // s.insert(5);
    // s.insert(5);
    // s.insert(5);
    // s.insert(0);
    // s.insert(0);
    // s.insert(0);
    // s.insert(2);
    // s.insert(1);

    // for(int i: s){
    //     cout<<i<<" ";
    // }cout<<endl;

    // set <int> ::  iterator it = s.begin();
    // it++;
    // s.erase(it);

    // cout<<"after erasing : ";
    // for(int i: s){
    //     cout<<i<<" ";
    // }cout<<endl;

    // cout<<"5 is present or not : "<<s.count(5)<<endl;
    
    // set <int> :: iterator itr = s.find(5);
    // cout<<"value present at itr : "<<*itr<<endl;

//******************************************************************************************

//STL MAP

    map<int,string> m;
    m[1] = "apple";
    m[13] = "banana";
    m[2] = "mango";
    m.insert({5,"guvava"});

    cout<<"finding 13 : "<<m.count(13)<<endl;
    cout<<"finding -13 : "<<m.count(-13)<<endl;

    cout<<"before erasing : "<<endl;
    for(auto i: m){
        cout<<i.first<<" : "<<i.second<<endl;
    }

    cout<<"after erasing : "<<endl;
    m.erase(13);
    for(auto i: m){
        cout<<i.first<<" : "<<i.second<<endl;
    }
    return 0;
}