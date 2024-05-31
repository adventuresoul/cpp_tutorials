// function overriding  -> just an another form of function overloading
#include<iostream>
using namespace std;

class Base{
    public:
        void show(){
            cout << "Base class" << endl;
        }
};

class Derived : public Base{
    public:
        void show(){
            Base :: show();
            cout << "Derived class" << endl;
        }
};

int main()
{
    Derived d;
    d.show();    // show(Derived* const this)
    return 0;
}