// rethrowing the excception

#include<iostream>
using namespace std;

void division(int a, int b){
    try{
        if(b == 0){
            throw b;
        }
        cout << "Division = " << a / b << endl;
    }
    catch(int a){
            cout << "caught inside function: " << endl;
            throw;
        }
}

int main()
{
    try{
        division(10, 5);
        division(20, 0);
    }
    catch(int a) {
        cout << "caught inside main function!" << endl;
    }
    
    return 0;
}