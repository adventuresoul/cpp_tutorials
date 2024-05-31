// inheritance
// class storage 1 byte
// single level inheritance
#include<iostream>
using namespace std;

class Student{
    int id;
    string name;
    public:
        void get_student(){
            cout << "Enter student id and name: " << endl;
            cin >> id >> name;
        }
        void put_student(){
            cout << "Name: " << name << endl << "ID: " << id << endl;
        }
};

class Physical : public Student{ // public -> visibility mode
    // all the public members of base class becomes public members of derived class
    float height , weight;
    public:
        void get_phy(){
            cout << "Enter height and weight: " << endl;
            cin >> height >> weight;
        }
        void put_phy(){
            cout << "Height: " << height << endl <<  "Weight: " << weight << endl;
        }
};

int main()
{
    // base class pointer can point to object of derived class, but can only access base class members and functions
    // whereas derived class pointer can be made forcibly point to base class and can access both base class and derived class member data and functions
    //Student *s;
    //Physical p;
    //s = (Studennt *)&p;
    //s->get_student();
    //s->put_student();
    //s->get_phy();     -> this line gives error
    Student s;
    Physical *p;
    p = (Physical *)&s;
    p->get_student();
    p->put_student();
    p->put_phy();
    p->put_phy();
    return 0;
}