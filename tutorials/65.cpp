// virtual function and dynamic polymorphism - look up virtual table concept
// to enable dynamic polymorphism you need to use virtual functions
#include<iostream>
using namespace std;

class A {
    int x;
    public:
        virtual void show(){        // while compiling try without virtual keyword
            cout << "function of A class" << endl;
        }
        ~A(){
            cout << "destructor of class A" << endl;
        }
};

class B: public A{
    int y;
    public:
        void show(){       // totally optional to tell the compiler to override base class function
            // the vtbl gets updated
            // A::show();
            cout << "function of B class" << endl;
        }
        ~B(){
            cout << "destructor of class B" << endl;
        }
};

int main()
{
    B obj;
    A *ptr;
    // ptr->show();
    ptr = &obj;
    ptr->show();    // even though ptr is pointing to obj of class b , it is not overriding the function if base class function is non virtual
                    // even if you use reference you would still get the same
    obj.show();    
    return 0;
}