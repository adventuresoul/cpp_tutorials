// class
/* syntax
 class <class-name>
 {
    private/public/protected:                   without declaring access specifier for attribute, by default in 
    c++ it is private
    data-type variable;                             // c++ never allows to just directly assign a value to variables, it should  be assigned through member functions only
    "                ";                             // data hiding concept
    return-type function()arguments
    {
                                                when the function is declared inside classs , it becomes inline member function
    }                                           inline functions makes program slower
 };
 creating objects
 class <tag-name> obj1,obj2,obj3;
*/
 //function defination outside the class
/*
    return-type class-name :: function-name(arg)    :: -> scope resolution operator(binary operator)
    {

    }
*/
#include<iostream>
using namespace std;
class student;      //forward class declaration
class student       //class defination
{
    char name[20];
    int id;
    public:
    void readstudent()
    {
        cout<<"Enter name and ID:"<<endl;
        cin>>name>>id;
    }
    void displaystudent();
};
void student::displaystudent()      //function defination outside class
{
    cout<<"Name= "<<name<<endl;
    cout<<"ID= "<<id<<endl;
}
int main()
{
    student s;
    s.readstudent();
    s.displaystudent();
    return 0;
}
// after compilation the class is converted to structure with only data members and scope resolution operator passes the address of invoking object as leading argument of the function
// eg -> s.displaystudent()   -> displaystudent(&s)     because the class is converted to structure with no member function, so the address of the object has to be passed inorder for functions to work.
// dot operator has two behaviours ->
// 1. when it is used to access data_member -> it behaves just as normal as like in c
// 2. when it is used to call function -> it passes the address of the object as a leading formal parameter to function call

// multiple copies of data members exists but only one copy of function , that's why the scope resolution operator adds address of the invoking object as the parameter in function call
