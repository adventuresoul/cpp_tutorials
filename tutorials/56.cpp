// exception handling
#include<iostream>
using namespace std;

class Test{
    int x;
    public:
        Test(){
            cout << "The constructor" << endl;
        }
        void get(){
            int y;
            cout << "Enter x value: " << endl;
            cin >> y;
            if (y != 100){
                throw 1.2;
            }
            else{
                this->x = y;
            }
        }
        void display(){
            cout << "Displaying: " << x << endl;
        }
        ~Test(){
            cout << "The destructor" << endl;
        }
};

int main()
{
    try{
       cout << "Welcome to exception handling" << endl;
       Test t;
       t.get(); // destructor also executed object deletion occurs if value is wrong, as it goes out of scope
       t.display();
    }
    catch(...){
        cout << "Thank you" << endl;
    }
    
    return 0;
}
// while handling derived class type exception , derived catch block should be first or else base class will catch the exception as derived class is inherited from base class only