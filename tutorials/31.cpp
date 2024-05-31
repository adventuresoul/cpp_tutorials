// overloading using friend function
// it is used when the operator overloading as a non member function

// if both friend and member functions are used to overload the operator, the compiler will throw ambiguity error.

#include<iostream>
using namespace std;
class Test2;
class Test1{
    int a;
    public:
        void get_a(){
            cin >> a;
        }
        friend void operator > (Test1 , Test2);
};

class Test2{
    int b;
    public:
        void get_b(){
            cin >> b;
        }
        friend void operator > (Test1 , Test2);
};

void operator > (Test1 t1 , Test2 t2){
    t1.a > t2.b ? cout << "a is big" << endl : cout << "b is big" << endl;
}

int main(){
    Test1 t1;
    t1.get_a();
    Test2 t2;
    t2.get_b();
    t1 > t2;
    return 0;
}