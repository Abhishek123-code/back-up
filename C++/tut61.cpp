#include <iostream>
#include <list>
using namespace std;
void display(list<int> &ls)
{
    list<int>::iterator it;
    for (it = ls.begin(); it != ls.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}
int main()
{
    list<int> ls1; // list of length 0
    ls1.push_back(5);
    ls1.push_back(3);
    ls1.push_back(7);
    ls1.push_back(9);
    ls1.push_back(11);

    display(ls1);
    // Removing elements from the list
    // ls1.remove(11);
    // ls1.pop_back();
    // ls1.pop_front();

    // Sorting the list
    // ls1.sort();
    // display(ls1);

    // reversing the list
    ls1.reverse();
    display(ls1);
    list<int> ls2(3); // list of size 7
    list<int>::iterator iter;
    iter = ls2.begin();
    *iter = 5;
    iter++;
    *iter = 4;
    iter++;
    *iter = 9;
    iter++;

    // ls2.sort();
    // display(ls2);
    // ls1.merge(ls2);
    // ls1.sort();
    // display(ls1);
    return 0;
}