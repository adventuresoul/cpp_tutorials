// operator overloading
// cannot overload ::   .    .*    ?:   sizeof() 

// overloading ==
// cannot take default parameters

#include<iostream>
using namespace std;

class Sample{
    int a;
    public:
        void get(){
            cin >> a;
        }
        bool operator == (const Sample &s){       // only reason for parameter to be const is because of the fact that the contents of the parameter should not be altered
            if(a == s.a){
                cout << "objects are equal" << endl;
                return true;
            }
            else{
                cout << "objects are not equal" << endl;
                return false;
            }
        }
};

int main(){
    Sample s1 , s2;
    s1.get();
    s2.get();
    s1 == s2;   
    return 0;
}

// Some rules governing the operator overloading concept
// 1. New operators cannot be created
// 2. Meaning of existing operators cannot be changed
// 3. (::, . , .* , ?: , sizeof, typeid) cannot be overloaded
// 4. Number of argments that an existing operator takes cannot be changed
