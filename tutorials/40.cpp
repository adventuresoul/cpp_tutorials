// hybrid inheritance -> multipath inheritance
#include<iostream>
using namespace std;

class Student{
    int id;
    string name;
    public:
        void get_stu(){
            cout << "Enter name and id: " << endl;
            cin >> name >> id;
        }
};

class Marks : public Student{
    protected:
        int m , p , c;
    public:
        void get_marks(){
            cout << "Enter 3 subject marks: " << endl;
            cin >> p >> c >> m;
        }
};

class Sports{
    protected:
        int sports_marks;
    public:
        void get_sports_marks(){
            cout << "Enter sports marks: " << endl;
            cin >> sports_marks;
        }
};

class Result : public Marks , public Sports{
    int total;
    float avg;
    public:
        void show(){
            total = sports_marks + m + p + c;
            avg = total / 5.0;
            cout << "Total : " << total << endl << "Average: " << avg << endl;
        }
};

int main()
{
    Result r;
    r.get_stu();
    r.get_sports_marks();
    r.get_marks();
    r.show();
    return 0;
}




