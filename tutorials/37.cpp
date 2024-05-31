// multiple inheritance
#include<iostream>
using namespace std;

class Student{
    int id;
    string name;
    public:
        void get_student(){
            cout << "Enter student ID and name: " << endl;
            cin >> name >> id;
        }
        void put_student(){
            cout << "Name: " << name << endl << "ID: " << id << endl;   
        }
};

class Marks{
    protected:       // when data memebers are declared protected , that class and immediately derived class can access that member
        int m1, m2, m3;
    public:
        void get_marks(){
            cout << "Enter student marks: " << endl;
            cin >> m1 >> m2 >> m3;
        }
        void put_marks(){
            cout << m1 << endl << m2 << endl << m3 << endl;
        }
};

class Result : private Student ,private Marks{
    int total;
    float avg;
    public:
        void show(){
            get_student();
            get_marks();
            total = m1 + m2 + m3;
            avg = total / 3.0;
            put_student();
            put_marks();
            cout << "Total: " << total << endl;
            cout << "Average : " << avg <<endl;
        }
};

int main()
{
    Result r;
    r.show();
    return 0;
}