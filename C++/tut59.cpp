#include <iostream>
using namespace std;
template <class t>
class abhi
{
public:
    t data;
    abhi(t a)
    {
        data = a;
    }
    void display();
};

template <class t>
void abhi<t>::display()
{
    cout << data;
}

// void func(int a)
// {
//     cout << "I am first func() " << a << endl;
// }

template <class t>
void func(t a)
{
    cout << "I am templatized func() " << a << endl;
}
template <class t>
void func1(t a)
{
    cout << "I am templatized func1() " << a << endl;
}
int main()
{
    //  abhi<int> h(4);
    // abhi<char> h('c');
    // cout << h.data << endl;

    // func(4);//exact match takes the highest prority
    func1(5); // exact match takes the highest prority
    return 0;
}