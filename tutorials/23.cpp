// static data members
#include <iostream>
using namespace std;
class Counter {
    public:
    static int count;
    Counter() { count++; }
    ~Counter() { count--; }
};
int Counter::count; // count initialized to zero , in c/c++ it is common to initialize with 0
// since the static data member cannot be initialized with costructor, we should initialize i with some value
void f();
int main()
{
    Counter o1;
    cout << "Objects in existence: ";
    cout << Counter::count << "\n";
    Counter o2;
    cout << "Objects in existence: ";
    cout << Counter::count << "\n";
    f();
    cout << "Objects in existence: ";
    cout << Counter::count << "\n";
    return 0;
}
void f()
{
    Counter temp;
    cout << "Objects in existence: ";
    cout << Counter::count << "\n";
    // temp is destroyed when f() returns
}