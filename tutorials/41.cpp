//  constructors in inheritance
#include<iostream>
using namespace std;

class Base{
    public:
        Base(){
            cout << "Base class constructor" << endl;
        }
};

class Derived : public Base{
    public:
        Derived(){
            // Base :: Base() -> compiler adds this implicitly only if it is default base constructor and it is the first line of excution
            cout << "Derived class constructor" << endl;
        }
};

int main()
{
    Derived d;     
    return 0;
}