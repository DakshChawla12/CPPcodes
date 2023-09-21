#include <iostream>
using namespace std;
class shopITEM
{
    int id;
    float price;

public:
    void setdata(int a, float b)
    {
        id = a;
        price = b;
    }
    void getData()
    {
        cout << "code of this item is : " << id << endl;
        cout << "price of this item is : " << price << endl;
    }
};
int main()
{
    int size = 3;
    shopITEM *ptr = new shopITEM[size];
    /*
    1) general store item
    2) vegetable store item
    3) hardware store item
    */
    int p;
    float q;
    shopITEM *ptrTemp = ptr;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter ID and Price if item  " << i + 1 << endl;
        cin >> p >> q;
        //(*ptr).setdata(p,q);
        ptr->setdata(p, q);
        ptr++;
    }
    // ptr = ptrTemp;   //ptr ko 1st index prr aagya
    // for(int i = 0 ; i < size; i++){
    //     cout<<"Item number : "<<i+1<<endl;
    //     ptr->getData();
    //     ptr++;
    // }
    // another logic for printing
    for (int i = 0; i < size; i++)
    {
        cout << "Item number : " << i + 1 << endl;
        ptrTemp->getData();
        ptrTemp++;
    }

    return 0;
}