// private inheritance
#include<iostream>
using namespace std;

class A{
    private:
        int x;
    protected:  
        int y;
    public:
        int z;
};

class B : A{
    public:
        void f1(){
            //x = 20; // gives error because x is private member of base class
            y = 30; // okay protected becomes private here
            z = 40; // okay public becomes private here
        }
};

class C : B{
    public:
        void f2(){
            //x = 22;   // private members
            y = 33; // error -> private
            z = 44;  // error -> private
        }
};

void outsider(){
    C c1;
    c1.z = 100;     // public members become private,so non member functions cannot access them
}
int main()
{
    A *aptr;
    B b1;
    aptr = &b1;     // a base class pointer cannot point at protected access derived class of base class 
    
    return 0;
}

// in deriving class by private access specifier

// private members -> no class can access them, except the public member functions of the base class
// public members -> member functions of the derived class can access them. and further more the member functions of the derived class cannot  access them. The non member functions cannot also access them
// protected members -> member functions of the derived class can access them. and further more the member functions of the derived class cannot access them. The non member functions cannot  access them