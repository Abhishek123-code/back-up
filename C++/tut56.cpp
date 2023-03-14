#include <iostream>
using namespace std;
/*
CLASS TEMPLATES WITH MULTIPLE PARAMETERES (ONE,TWO OR MORE THAN TWO)
template<class t1,class t2>
class nameofclass
{
    //body
}

*/
template <class t1, class t2>
class myclass
{
public:
    t1 data1;
    t2 data2;
    myclass(t1 a, t2 b)
    {
        data1 = a;
        data2 = b;
    }
    void display()
    {
        cout << this->data1 << this->data2 << endl;
    }
};
int main()
{
    myclass<int, char> obj(1, 'z');
    obj.display();
    return 0;
}