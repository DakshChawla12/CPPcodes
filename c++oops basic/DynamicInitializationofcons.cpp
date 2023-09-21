#include<iostream>
using namespace std;
class bankdeposit{
    int principal,years;
    float IR,returnval;
    public:
    bankdeposit(){}
    bankdeposit(int p,int y,float r);
    bankdeposit(int p,int y,int r);
    void show();

};
bankdeposit ::  bankdeposit(int p,int y,float r){
    principal=p;
    years=y;
    IR=r;
    returnval=principal;
    for (int i = 0; i < y; i++)
    {
        returnval=returnval*(1+r);
    }
    
}
bankdeposit ::  bankdeposit(int p,int y,int r){
     principal = p;
    years = y;
    IR = float(r)/100;
    returnval = principal;
    for (int i = 0; i < y; i++)
    {
        returnval = returnval * (1+IR);
    }
    
}
void bankdeposit :: show(){
    cout<<"principal amount was "<<principal<<endl<<"return value after "<<years<<" years is "<<returnval;
}
int main(){
    bankdeposit bd1,bd2,bd3;
    int p,y;
    float r;
    int R;

    cout<<"enter value of p,y,r: "<<endl;
    cin>>p>>y>>r;
    bd1=bankdeposit(p,y,r);
    bd1.show();

    cout<<endl;

    cout<<"enter value of p,y,R: "<<endl;
    cin>>p>>y>>R;
    bd2=bankdeposit(p,y,R);
    bd2.show();
return 0;
}