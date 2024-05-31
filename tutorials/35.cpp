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

class Physical : private Student{ // private -> visibility mode
    // all the public and protected members of base class becomes private members of derived class
    float height , weight;
    public:
        void get_phy(){
            get_student();
            cout << "Enter height and weight: " << endl;
            cin >> height >> weight;
        }
        void put_phy(){
            put_student();
            cout << "Height: " << height << endl <<  "Weight: " << weight << endl;
        }
};

int main()
{
    Physical p;
    p.get_phy();
    p.put_phy();
    return 0;
}