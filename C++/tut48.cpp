#include <iostream>
using namespace std;

class Baseclass
{
public:
    int varbase;
    void display()
    {
        cout << "Displaying base class variable " << varbase << endl;
    }
};

class Derived : public Baseclass
{
public:
    int varder;
    void display()
    {
        cout << "Displaying base class variable " << varbase << endl;
        cout << "Displaying derived class variable " << varder << endl;
    }
};
int main()
{
    Baseclass *bcpointer;
    Baseclass obj1;
    Derived objderivded;
    bcpointer = &objderivded; // pointing baseclass pointer to derived class

    bcpointer->varbase = 34;
    // bcpointer->varder=44; //will throw an error
    bcpointer->display();

    Derived *dcpointer;
    dcpointer = &objderivded;
    dcpointer->varbase = 89;
    dcpointer->varder = 9;
    dcpointer->display();
    return 0;
}