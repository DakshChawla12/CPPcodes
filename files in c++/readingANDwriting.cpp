#include<iostream>
#include<fstream>
/*

the useful classes for working with files are -->
1) fstreambase
2) ifstream --> derived from fstreambase
2) ofstream --> derived from fstreambase

in ordfer to work with files in c++ we have 
to open it.there are 2 ways yto open files:
1) using constructor 
2) using member function open() of class

*/
using namespace std;
int main(){
    //opening files using constructor

    string st = "harry bhai";
    string st2;

  //*** opening files and writing to it***
     ofstream out("files.txt"); // write operation
     out<<st;

  //****opening files and reading from it

    ifstream in("files2.txt"); 
    /* in>>st2;
    this will print only the 1st word of file
    cout<<st2; */ 

   getline(in,st2); // gets one line from file
   cout<<st2;
return 0;
}