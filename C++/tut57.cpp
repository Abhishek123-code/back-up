#include <iostream>
using namespace std;
template <class t1 = int, class t2 = float>
class Abhi
{
public:
    t1 a;
    t2 b;
    Abhi(t1 x, t2 y)
    {
        a = x;
        b = y;
    }
    void display()
    {
        cout << "the value of a is " << a << endl;
        cout << "the value of b is " << b << endl;
    }
};
int main()
{
    Abhi A(5,'a');
    A.display();
    Abhi <float,int>N(5.3,8.88);
    N.display();
    return 0;
}