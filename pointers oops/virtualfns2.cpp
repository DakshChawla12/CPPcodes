#include <iostream>
#include <cstring>
using namespace std;
class CWH
{
protected:
    string title;
    float rating;

public:
    CWH(string s, float r)
    {
        title = s;
        rating = r;
    }
    virtual void display()
    {
        cout << "garbage code";
    }
    // void display(){
    //     cout<<"garbage ";
    // }
};
class CWHvideo : public CWH
{
    float vidlength;

public:
    CWHvideo(string s, float r, float vl) : CWH(s, r)
    {
        vidlength = vl;
    }
    void display()
    {
        cout << "this is an amazing vid with title : " << title << endl;
        cout << "rating : " << rating << " out of 5 stars" << endl;
        cout << "length of this vid is : " << vidlength << " mins" << endl;
        cout << endl;
    }
};

class CWHtext : public CWH
{
    int words;

public:
    CWHtext(string s, float r, int wc) : CWH(s, r)
    {
        words = wc;
    }
    void display()
    {
        cout << "this is an amazing text tutorial with title " << title << endl;
        cout << "ratings of this text tutorial is : " << rating << endl;
        cout << "no of words in this text tutorial  are : " << words << endl;
    }
};
int main()
{
    string title;
    float rating, vlength;
    int words;

    // for video
    title = "this is django tut";
    vlength = 4.56;
    rating = 4.89;
    CWHvideo djvid(title, rating, vlength);
    // djvid.display();

    // for text
    // for video
    title = "django txt";
    words = 433;
    rating = 4.19;
    // CWHvideo djvid(title,rating,vlength);
    CWHtext djtext(title, rating, words);
    //  djtext.display();
    CWH *tuts[2];
    tuts[0] = &djvid;
    tuts[1] = &djtext;

    tuts[0]->display();
    tuts[1]->display();
    return 0;
}