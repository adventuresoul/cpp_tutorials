// virtual constructor a.k.a clone 
#include<iostream>
using namespace std;

class Dog{
    public:
        virtual Dog* clone(){
            return (new Dog(*this));
        }
};

class Yellowdog : public Dog{
    public:
        virtual Yellowdog* clone(){
            return (new Yellowdog(*this));
        }
};

void foo(Dog *d){  // d is a yellow dog
    //Dog *c = new Dog(*d);   // c will not be a yellow dog 
    Dog *c = d->clone();
    // ...
    // play!

};

int main()
{
    Yellowdog d;
    foo(&d);
    return 0;
}