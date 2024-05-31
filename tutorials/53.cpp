// exception handling
#include<iostream>
using namespace std;

int main()
{
    int a, b;
    try{
        cout << "Enter two numbers" << endl;
        cin >> a >> b;
        if(b == 0){
            throw 0;            // throw block terminates the function and throw should be catched always, otherwise the program terminates
        }
        cout << "Division = " << a / b << endl;
    }
    catch(int x){
        cout << "Division not possible / division by zero error" << endl;
    }
    
    return 0;
}

