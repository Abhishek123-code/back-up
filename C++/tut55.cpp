#include <iostream>
using namespace std;
template <class T>
class vector
{
    int size;

public:
    T *arr;
    vector(int m)
    {
        size = m;
        arr = new T[size];
    }
    T dotproduct(vector &v)
    {
        T f = 0;
        for (int i = 0; i < size; i++)
        {
            f += this->arr[i] * v.arr[i];
        }
        return f;
    }
};
int main()
{
    // vector v1(3);
    // v1.arr[0]=4;
    // v1.arr[1]=44;
    // v1.arr[2]=34;

    // vector v2(3);
    // v2.arr[0]=4;
    // v2.arr[1]=2;
    // v2.arr[2]=3;
    // int a=v1.dotproduct(v2);
    // cout<<a<<endl;

    vector<float> v1(3);
    v1.arr[0] = 4;
    v1.arr[1] = 4.4;
    v1.arr[2] = 3.4;

    vector<float> v2(3);
    v2.arr[0] = 4.3;
    v2.arr[1] = 2.1;
    v2.arr[2] = 3.2;
    float a = v1.dotproduct(v2);
    cout << a << endl;
    return 0;
}