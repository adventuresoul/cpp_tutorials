// local class
#include<iostream>
using namespace std;
int x = 100;

void function(){
    class Test{
        int x;
        public: 
            void show(){
                x = 200;
                cout << "Local x = " << x << endl;
                cout << "Global x = " << ::x << endl;
            }
    };
    Test t;
    t.show();
}

int main()
{
    function();
    return 0;
}