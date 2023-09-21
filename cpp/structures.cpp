#include<iostream>
using namespace std;
//   structure********************
// typedef struct employee{
//     int eID;
//     char favchar;
//     float salary;
// }employee;

// int main(){
//     employee harry;
//     employee shubham;
//     harry.eID=1;
//     harry.favchar='f';
//     harry.salary=2000000;

//     shubham.eID=2;
//     shubham.favchar='t';
//     shubham.salary=120000;

//     cout<<harry.salary<<endl;
//     cout<<harry.favchar<<endl;
//     cout<<shubham.salary<<endl;


    
   

//     return 0;
// }

// union************************************


//   typedef union money{
//     int rice;
//     char car;
//     float pounds;
// }money;
// int main(){
//     money m1,m2,m3;
//     m1.rice=10;
//     m1.car='b';
//     m1.pounds=100;

   
//     cout<<m1.rice<<endl;
//     cout<<m1.car<<endl;
//     cout<<m1.pounds;
//     return 0;
// }

// enum*****************************
int main(){
    enum meal{breakfast,lunch,dinner};
    meal m1=breakfast;
    cout<<m1<<endl;
    cout<<breakfast<<endl;
    cout<<lunch<<endl;
    cout<<dinner;
    return 0;
}