//overloading << and >> operator
// cout << a;     the operator has to be used with two objects(i.e. cout and formal parameter, cout is an object of ostream class)
// so we will use friend function 

// Sometimes you can't declare operator overload as a member function, like in IO operator<< and operator>>. The first parameter of these functions has to be ostream or istream, which are library classes and you can't extend them, declaring such functions as friend gives them access to private variables of your class.


#include<iostream>
using namespace std;

class Stu{
    int id;
    string name;
    public:
        friend istream& operator >>(istream &in , Stu &s);
        friend void operator <<(ostream &out , Stu &s);
};
istream& operator >> (istream &in , Stu &s){
    cout << "Enter Stu ID , name" << endl;
    in >> s.id >> s.name;
    return in;
}
void operator << (ostream &out , Stu &s){
    out << "ID : " << s.id << endl;
    out << "Name : " << s.name << endl;
    //return out;
}
int main(){
    Stu s;
    cin >> s;
    cout << s;
    return 0;
}