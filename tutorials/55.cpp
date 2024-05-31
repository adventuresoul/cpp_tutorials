// exceptions
// try block without catch block -> compiler shows error
#include<iostream>
using namespace std;

int main()
{
    try{
        cout << "Testing any exception" << endl;
        throw 1.2;
    }
    catch(...){
        cout << "Catched the thrown value" << endl;
    }
    
    return 0;
}