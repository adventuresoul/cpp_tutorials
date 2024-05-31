// static function -> doesn't use this pointer as formal argument, because it's not related to any object, it has class scope
#include<iostream>
using namespace std;
class Test{
    static int x , y;
    public:
        static void read(int x , int y){
            if (x > y)
            {
                cout << "x is big"<< endl;
            }
            else{
                cout << "y is big" << endl;
            }
            
        }
};

int Test::x, y;           // static data members cannot be used with this pointer


int main(){
    Test t1;
    t1.read(4 , 5);
    Test::read(7 , 8);   // static member functions should be accessed with scope operator
    return 0;
}