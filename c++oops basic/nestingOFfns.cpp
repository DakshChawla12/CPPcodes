#include<iostream>
#include<string>
using namespace std;

class binary{
        string s;
        public:
        void read(void);
        void chk_bin(void);
        void onescomp(void);
        void display(void);

};

void binary :: read(void){
    chk_bin();
   
    cout<<"enter a binary number: "<<endl;
    cin>>s;
}
void binary :: chk_bin(void){
    for(int i=0;i<s.length();i++){
        if(s.at(i)!='0' && s.at(i)!='1'){
            cout<<"incorrect binary format"<<endl;
            exit(0);
        }
    }
}
void binary :: onescomp(void){
    for(int i=0;i<s.length();i++){
        if(s.at(i)=='0'){
            s.at(i)='1';
        }
        else if ((s.at(i)=='1'))
        {
           s.at(i)='0';
        }
       
    }
}
void binary ::display(void){
    for(int i=0;i<s.length();i++){
        cout<<s.at(i);
    }
}

int main(){
binary b;
b.read();
 //b.chk_bin();
 b.onescomp();
 b.display();
    
    return 0;
}