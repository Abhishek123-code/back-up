#include <iostream>
using namespace std;
class Baseclass
{
public:
    int varbase;
    virtual void display()
    {
        cout << "I am Displaying base class variable " << varbase << endl;
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

    bcpointer = &objderivded;
    bcpointer->display();
    return 0;
}