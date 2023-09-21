#include<iostream>
using namespace std;
class shop{
    int itemID[100];
    int itemPRICE[100];
    int counter;
    public:
        void resetcounter(void){counter =0;}
        void setPRICE(void);
        void displayPRICE(void);
};
void shop :: setPRICE(void){
    cout<<"enter item id"<<endl;
    cin>>itemID[counter];
    cout<<"enter price"<<endl;
    cin>>itemPRICE[counter];
    counter++;
}
void shop :: displayPRICE(void){
    for(int i=0;i<counter;i++){
        cout<<"price of item with id :"<<itemID[i]<<" is : "<<itemPRICE[i]<<endl;
    }
}
int main(){
    shop item1;
    item1.resetcounter();
    item1.setPRICE();
    item1.setPRICE();
    item1.displayPRICE();

    return 0;
}