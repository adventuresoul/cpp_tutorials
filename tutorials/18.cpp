// constructor overloading
// calling one constructor inside another constructor 
// syntax classname :: constructor(args....... )
#include<iostream>
#include<string>
using namespace std;
class student
{
    string name,course;
    float fee;
    public:
        student(string name,string course)
        {
            this->name = name;
            this->course = course;
            fee = 0;
        }
        student(string name,string course,float fee)
        {
            student(name,course);        // calling one constructor within another constructor
            this->fee = fee;
        }
        void show()
        {
            cout << "Name : " << name << endl;
            cout << "course : " << course << endl;
            cout << "Fee : "  << fee << endl;
        }
};

int main()
{
    student s1("Vinay","python");
    student s2("Tushar","python",5000);
    s1.show();
    s2.show();
    return 0;
}