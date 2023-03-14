#include <iostream>
#include <fstream>
using namespace std;

int main()
{

    // connecting files with hout stream
    //  ofstream hout("sample52.cpp");

    // creating a name string and filling it with the string entered by the user
    cout << "Enter your name";
    string name;
    cin >> name;

    // //writing string to thr file
    // hout<<"My name is Abhishek"<<endl;
    // hout.close();

    // writing string to the file
    ifstream hin("sample53.txt");
    string content;
    hin >> content;
    cout << "The content of this file is" << content;
    hin.close();
    return 0;
}