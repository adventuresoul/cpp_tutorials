// 
#include<iostream>
#include<fstream>
using namespace std;

class Student{
    int id;
    string name;
    public:
        get_student(){
            cout << "Enter student id, name" << endl;
            cin >> id >> name;
        }

};
int main()
{
    Student s;
    //ostream file("student.txt");  // opening file using parameterized constructor
    file.open("student.txt");
    char op;
    do{
        s.get_student();
        file.write((char *)&s, sizeof(s));  // stack data -> file
        cout << "one row created" << endl;
        cout << "Any more? " << endl;
        cin >> op;
    } while (op == 'y');
    file.close();
    return 0;
}