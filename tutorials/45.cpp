// pure virtual functions -> declared in class but not defined
// abstract base class
// iterface
#include<iostream>
using namespace std;

class Shape{    // pure virtual function is defined here, so it is abstract base class
    protected:
        float d1, d2;
    public:
        void get_dim(){
            cout << "Enter dimensions: " << endl;
            cin >> d1 >> d2;
        }
        virtual float area() = 0;   // pure virtual function 
        // even if only one pure virtual function is there, the entire class becomes abstract base class(Iterface)
        // object of abstract base class cannot be instanced
        // class remains abstract base class even if you declare functions here
};

class Triangle: public Shape{
    public:
        float area(){
            return (0.5 * d1 * d2);
        }
        // not defyning all the pure virtual function in derived class also results in abstract base class
};

class Rectangle: public Shape{
    public:
        float area(){
            return d1 * d2;
        }
};


int main()
{
    //Shape s; -> gives error because it is abstract base class
    Triangle t;
    t.get_dim();
    cout << t.area() << endl;
    Rectangle r;
    r.get_dim();
    cout << r.area() << endl;
    return 0;
}


// whenever there is a virtual function , the virtual table or vtbl is constructed and keeps track of the functions,
// if any function is overridden , it will be updated with new pointer to the function in vtbl
// so the size of the object would 4 bytes more for each of the virtual function