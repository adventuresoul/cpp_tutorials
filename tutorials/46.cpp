// virtual destructors 
// run time polymorphism
#include<iostream>
using namespace std;

class Base{
    public:
        Base(){
            cout << "Base class constructor: " << endl;
        }
        void base_func(){
            cout << "This is base class function" << endl;
        }
        virtual ~Base(){    // to enable dynamic polymorphism!
                            // try without virtual now
            cout << "Base class destructor:" << endl;
        }
};

class Derived: public Base{
    public:
        Derived(){
            cout << "Derived class constructor: " << endl;
        }
        void derived_func(){
            cout << "This is derived class function" << endl;
        }
        ~Derived(){
            cout << "Derived class destructor: " << endl;
        }
};

int main()
{
    // no problem occurs with the below 2 lines
    // Derived *d = new Derived();
    // delete d;

    // The problem arises when pointer to base class is pointing object of derived class
    // Base class pointer has only access to members and attributes of base class only, so it has no right to execute destructor of derived class
    Base *b = new Derived();
    //b->base_func()  base class pointer can point to derived class, but can only access base class methods
    // just type case
    /*
        Base *b;
        Derived *d =  new Derived;
        b = (Derived *)&b;
    */
    delete b;  
    return 0;
}

// constructors are invoked in following priority
// virtual base class
// Non virtual base class
// Member's object constructors in order of declaration
// derived class constructor
// destructors in exact reverse order





/*
A virtual destructor is a concept in object-oriented programming languages, particularly in C++ and related languages. It is used to ensure proper destruction of objects when they are deleted, even in scenarios involving polymorphism and inheritance. Let's break down the concept:

Destructor: In C++ (and many other languages), a destructor is a special member function of a class that is responsible for cleaning up resources held by an object when it goes out of scope or is explicitly deleted. The destructor is automatically called when an object's lifetime ends, typically at the end of its scope or when delete is called on a dynamically allocated object.

Virtual Destructor: Inheritance is a key feature of object-oriented programming, where a derived class can inherit attributes and behaviors from a base class. When a base class pointer points to a derived class object, and that pointer is deleted, only the base class destructor is called by default. This can lead to resource leaks if the derived class has allocated additional resources that need to be cleaned up.

To address this issue, you can declare the base class destructor as virtual. This means that even when a derived class object is being deleted through a base class pointer, the appropriate destructor (of the derived class) will be called, followed by the base class destructor. This ensures that all resources are properly released.*/