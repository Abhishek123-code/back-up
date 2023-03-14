#include <iostream>
using namespace std;

// float funavg(int a,int b)
// {
//     float avg=(a+b)/2.0;
//     return avg;
// }
// float funavg2(int a,float b)
// {
//     float avg=(a+b)/2.0;
//     return avg;
// }
template <class t>
void swapp(t &a, t &b)
{
    t temp = a;
    a = b;
    b = temp;
}

template <class t1, class t2>
float funavg2(t1 a, t2 b)
{
    float avg = (a + b) / 2.0;
    return avg;
}
int main()
{
    float a;
    a = funavg2(5, 2.4);
    cout << a << endl;
    int x = 7, y = 5;
    swapp(x, y);
    cout << x << endl
         << y;
    return 0;
}