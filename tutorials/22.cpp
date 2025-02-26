// inline, the compiler just replaces the lines 
#include<iostream>
using namespace std;
class myclass {
    int a, b;
    public:
    void init(int i, int j);
    void show();
};
// Create an inline function.
inline void myclass::init(int i, int j){
    a = i;
    b = j;
}
// Create another inline function.
inline void myclass::show(){
    cout << a << " " << b << "\n";
}
int main()
{
    myclass x;
    x.init(10, 20);
    x.show();
    return 0;
}
// inline is actually just a request, not a command, to the
//compiler. The compiler can choose to ignore it