#include<iostream>
#include<map>
#include<string>
//map is an associative array
using namespace std;
int main(){
    map <string,int> marksMAP;
    marksMAP["harry"]=98;
    marksMAP["jack"]=8;
    marksMAP["rohan"]=89;
    marksMAP.insert({{"daksh",90},{"raj",85}});
     map <string,int> :: iterator itr;
     for(itr = marksMAP.begin(); itr!=marksMAP.end();itr++){
        //alphabetical order may print hoga
        cout<<(*itr).first<<"-->"<<(*itr).second<<endl;// first se key second se value
        
     }
     cout<<"size is : "<<marksMAP.size()<<endl;
return 0;
}