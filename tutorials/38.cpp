// multi level inheritance
#include<iostream>
using namespace std;

class Student{
    int id;
    string name;
    public:
        void get_student(){
            cout << "Enter student name and id: " << endl;
            cin >> name >> id;
        }
        void put_student(){
            cout << "Name: " << name << endl << "ID: " << id << endl;
        }
};

class Marks : public Student{
    protected:
        int m1 , m2 , m3;
    public:
        void get_marks(){
            cout << "Enter m1 , m2 and m3: " << endl;
            cin >> m1 >> m2 >> m3;
        }
        void put_marks(){
            cout << "m1 = " << m1 << endl << "m2 = " << m2 << endl << "m3 = " << m3 << endl;
        }
};

class Result : public Marks{
    int total;
    float avg;
    public:
        void show(){
            total = m1 + m2 + m3;
            avg = total / 3.0;
            cout << "Total = " << total << endl;
            cout << "Average = " << avg << endl;
        }
};

int main()
{
    Result r;
    r.get_student();
    r.get_marks();
    r.put_student();
    r.put_marks();
    r.show();
    return 0;
}