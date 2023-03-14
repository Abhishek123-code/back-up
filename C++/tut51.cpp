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
    virtual void display() = 0; // do nothing function-> pure virtual function
};

class CWHvid : public CWH
{
    float videolen;

public:
    CWHvid(string s, float r, float vl) : CWH(s, r)
    {
        videolen = vl;
    }
    void display()
    {
        cout << "This is a good tutorial with title" << title << endl;
        cout << "Ratings " << rating << " out of 5 start" << endl;
        cout << "length of the video is " << videolen << " minutes" << endl;
    }
};
class CWHtext : public CWH
{
    int wrds;

public:
    CWHtext(string s, float r, int wc) : CWH(s, r)
    {
        wrds = wc;
    }
    void display()
    {
        cout << "This is a good text tutorial with title" << title << endl;
        cout << "Ratings of text tutoria" << rating << " out of 5 start" << endl;
        cout << "no of texts in the video is " << wrds << " words" << endl;
    }
};
int main()
{
    string title;
    float rating, vlen;
    int words;

    title = "CPP tutorial";
    vlen = 6.6;
    rating = 4.5;
    CWHvid cpvid(title, rating, vlen);
    // cpvid.display();

    title = "CPP text tutorial";
    words = 626;
    rating = 4.5;
    CWHtext cptt(title, rating, words);
    // cptt.display();

    CWH *tut[2];
    tut[0] = &cpvid;
    tut[1] = &cptt;

    tut[0]->display();
    tut[1]->display();
    return 0;
}

// Rules for virtual functions:
// 1. They cannot be static
// 2. they are accessed by object pointers
// 3. Virtual function can be a friend of another class
// 4. A virtual function in base class might not be used
// 5. A virtual function is defined by base class,there is no necessity of redefining it in the derived class