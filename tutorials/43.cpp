// Destructors in inheritance
#include<iostream>
using namespace std;

class Base{
    public:
        ~Base(){
            cout << "Base class destructor" << endl;
        }
};

class Derived : public Base{
    public:
        ~Derived(){
            // Base :: ~Base()  is last line of execution
            cout << "Derived class destructor" << endl;
        }
};

int main()
{
    Derived d;
    return 0;
}

// constructor and destructor follows LIFO concept