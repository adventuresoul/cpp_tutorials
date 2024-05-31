// overloading + operator
#include<iostream>
#include<string.h>
using namespace std;

class Test{
    string st;
    public:
        Test(){           
            cout << "Enter the string:" << endl;
            cin >> st;
        }
        void show(){
            cout << st << endl;
        }
         Test operator + (const Test &t2){
             Test t3;
             t3.st += st;
             t3.st += " ";
             t3.st += t2.st;
             return t3;
        }
        void operator = (Test t2){
            this->st = t2.st;
            //return *this;
        }
};

int main(){
    Test t1,t2,t3;
    t3 = t1 + t2;
    t3.show();
    t1 = t2;    // copy costructor would not be callled when assignment operator is used
    t1.show();

    return 0;
}