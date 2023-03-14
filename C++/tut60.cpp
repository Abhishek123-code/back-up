#include <iostream>
#include <vector>

using namespace std;
template <class t>
void display(vector<t> &v)
{
    cout << "Displaying the vector" << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
        // cout<<v.at(i)<<" ";
    }
    cout << endl;
}
int main()
{
    vector<int> v1; // zero length vector
    // int el;
    // for (int i = 0; i < 5; i++)
    // {
    //     cout<<"Enter an element to this vector";
    //     cin>> el;
    //     v1.push_back(el);
    // }
    // v1.pop_back();
    // display(v1);
    // vector<int> :: iterator iter=v1.begin();
    // v1.insert(iter+1,566);
    // display(v1);

    vector<char> v2(4); // 4- element character vector
    // v2.push_back('5');
    // display(v2);

    vector<char> v3(v2); // 4- element character vector from vec2
    // display(v3);

    vector<int> v(7, 13); // 6- element vector of 13s
    display(v);
    cout << v.size();
    return 0;
}