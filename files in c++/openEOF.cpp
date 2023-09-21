#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
    ofstream out;
    out.open("files2.txt");
    out<<"this is me"<<endl;
    out<<"this is also meee";
    out.close();

    ifstream in;
    string st,st2;
    in.open("files2.txt");
   // in>>st>>st2;
    //cout<<st<<st2;
    while(in.eof() == 0){
        getline(in,st);
        cout<<st<<endl;
    }
    in.close();
return 0;
}