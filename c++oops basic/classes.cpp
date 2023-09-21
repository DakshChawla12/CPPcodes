#include<iostream>
using namespace std;

// class employee{
//     private:
//         int a,b,c;
//     public:
//         int d,e;
//         void setData(int a1,int b1,int c1);
//         void getData(){
//             cout<<"value of a: "<<a<<endl;
//             cout<<"value of b: "<<b<<endl;
//             cout<<"value of c: "<<c<<endl;
//             cout<<"value of d: "<<d<<endl;
//             cout<<"value of e: "<<e<<endl;
//         }
// };
// void employee ::setData(int a1,int b1,int c1){
//     a=a1;
//     b=b1;
//     c=c1;
// }

// int main(){
//     employee harry;
//     harry.d=34;
//     harry.e=35;
//     harry.setData(1,2,4);
//     harry.getData();
//     return 0;
// }
class student{
    private:
        int marks,phnnumber;
    public:
    int route,rollNo;

    void privatedata(int marks,int phnnumber);
    void publicdata(){
        cout<<"marks :"<<marks<<endl;
        cout<<"phone number :"<<phnnumber<<endl;
        cout<<"route :"<<route<<endl;
        cout<<"roll number :"<<rollNo<<endl;

    }
};
void student ::privatedata(int a,int b){
   
   marks=a;
   phnnumber=b;
}
int main(){
    student daksh;
        daksh.rollNo=22103;
        daksh.route=38;
        daksh.privatedata(80,836044);
        daksh.publicdata();
}