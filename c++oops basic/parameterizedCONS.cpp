#include<iostream>
using namespace std;
class point{
    int x,y;
    public:
    point(int a,int b){
        x=a;
        y=b;
    }
    void displaypoint(){
        cout<<"the point is ("<<x<<","<<y<<")"<<endl;
    }
    friend point sumpoint(point ,point);
};

point sumpoint(point p1,point p2){
    point p3 = point(p1.x+p2.x,p1.y+p2.y);
    return p3;
}
int main(){
    point p1(1,2);
    point q(3,4);
     
    point s=sumpoint(p1,q);
  //  p.displaypoint();
    q.displaypoint();
    s.displaypoint();

return 0;
}