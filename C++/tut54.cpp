#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream out;
    out.open("sample52.txt");
    out << "Hello there";
    out << "Hello there again";
    out << "Hello there again 2";
    out << "Hello there again 3";
    out.close();

    ifstream in;
    string st, st2;
    in.open("sample52.txt");
    // in>>st>>st2;
    // cout<<st<<st2;

    while (in.eof() == 0)
    {
        getline(in, st);
        cout << st << endl;
    }

    in.close();
    return 0;
}