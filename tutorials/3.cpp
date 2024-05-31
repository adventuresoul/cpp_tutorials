/* Manipulators
 available in <iomanip>
 when iomanip is used there is no need for iostream

 Manipulator operator
 --------------------
 endl and ends (works with just iostream)
 endl doesn't consume memory where as \n consumes 1 byte of memery
 ends just gives 1 space

 Manipulator function
 ---------------------
   
*/
#include<iomanip>
#include<iostream>
using namespace std;
int main()
{
    cout << setfill('x');   //setfill(const char);
    cout << setw(10) << "hello" << endl;
    cout << setfill(' ');                       //you need to stop setfill function somehow
    cout << setw(10) << "Hi" << endl;
    cout << setprecision(3) << 22/7.00 <<endl;
    cout << setbase(8) << 65 <<endl;
    //setiosflags concept
    //setiosflags is a super-container
    cout << setw(10) << setiosflags(ios ::left) << "Rama" << endl;
    cout << setiosflags(ios::oct) << 65 << endl;
    cout << setiosflags(ios::showpos) << 100 << endl;   
    cout << setiosflags(ios::showpoint) << 22/7.0 << endl;
    cout << setiosflags(ios::scientific) << 222.6556655 << endl;
    return 0;
}