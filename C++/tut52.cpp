#include <iostream>
#include <fstream>
using namespace std;

/*the useful classes for working with files in C++ are
1.fstreambase
2.ifstream--> derived from fstreambase
2.ofstream--> derived from fstreambase
*/

// In order to work with files in C++,you will have to open it.primarily, there are two ways to open a file:
// 1.using the constructor
// 2. using the member function open() of the class

int main()
{
    string st = "Abhishek Ojha";
    string st2;
    // //opening file using constructor
    ofstream out("sample.txt"); // write operation
    out << st;

    // opening file using constructor and reading from it
    //  ifstream in("sample52.txt");//read operation
    //  // in>>st2;
    //  getline(in, st2);
    //  cout<<st2;

    return 0;
}