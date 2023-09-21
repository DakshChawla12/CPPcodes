#include<iostream>
#include<fstream>
using namespace std;
int main(){
    //connecting our file with hout stream
     ofstream hout("files2.txt");
    // //creating a name string and filling it with name entered by user
     cout<<"enter name:";
     string name;
     cin>>name;
     hout<< name+" is my name";
     hout.close(); // breaks link between this and the text file
    
    ifstream hin("files2.txt");
    string content;
    hin>>content;
    cout<<" the content in this file is "<<content;
    hin.close();
return 0;
}