// virtual class
// Diamond shape in inheritace
//         C1
//         /\
//        /  \
//      C2    C3
//       \    /
//        \  /
//         C4

#include<iostream>
using namespace std;

class C1{
    public:
        void c1func(){
            cout << "This is c1 class function" << endl;
        }
};

class C2 : public virtual C1{  
    public:
        void c2func(){
            cout << "This is c2 class function" << endl;
        }
};

class C3 : public virtual C1{
    public:
        void c3func(){
            cout << "This is c3 class function" << endl;
        }
};

class C4 : public C2 , public C3{
    public:
        void c4func(){
            cout << "This is c4 class function" << endl;
        }
};

int main()
{
    C4 c;
    c.c1func();   // c3 and c2 if not declared virtual, C4 instace will contain the definition of c1 func two times, it will result in ambiguity error, to solve this c2 and c3 should be declared virtual if c4 wants the methods of c1
    c.c2func();
    c.c3func();
    c.c4func();
    return 0;
}