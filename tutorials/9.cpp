/*Features of OOPs:Four major object-oriented programming features make them different from non-OOP languages: 
●Abstraction is the property by virtue of which only the essential details are displayed to the user. 
●Inheritance allows you to create class hierarchies,where a base class gives its behavior and attributes to a derived class. 
●Polymorphism ensures that it will execute the proper method based on the calling object’s type. 
●Encapsulation allows you to control access to your object’s state while making it easier to maintain or change your implementation at a later date.*/

#include<iostream>
#include<string.h>
using namespace std;
class emp
{
    string empname;
    int empID;
    float empsalary;
    public:
        void get_details(int ID,string name,float salary)
        {
            empname = name;
            empID = ID;
            empsalary = salary;
        }
        void put_details()
        {
            cout << empname << endl << empID << empsalary << endl;
        }
};

int main()
{
    emp e;
    e.get_details(121,"Vinay",15.0);
    e.put_details();
    return 0;
}