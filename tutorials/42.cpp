//  constructors in inheritance(parameterized)
// base class should have to contain a default constructor
// base class parameterized constructor should be the first statement in derived class parameterized constructor

//DerivedClass::DerivedClass(formal parameters) : BaseClass(parameters) {
    // rest of  constructor code
//}

#include<iostream>
using namespace std;

class Student{
    string name , course;
    public:
        Student(){
            // cout << "Base class constructor" << endl;
        }
        Student(string name , string course){
            this->name = name;
            this->course = course;
        }
        void show_student(){
            cout << "Name: " << name << endl << "Course: " << course << endl;
        }
};

class Marks : public Student{
    int m , p , c;
    public:
        Marks(string name, string course, int m, int p, int c) : Student(name, course){
            this->m = m;
            this->p = p;
            this->c = c;
        }
        void show_marks(){
            cout << m << endl << p << endl << c << endl;
        }
};

int main()
{
    Marks m("Ram" , "CSE" , 99 , 97 , 98);
    m.show_student();
    m.show_marks();
    return 0;
}
