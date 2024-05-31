#include<iostream>
#include<cmath>
using namespace std;

// Abstract base class - Interface
class Shape{
    protected:
        float d1, d2;
    public:
        virtual void initialize() = 0;
        virtual float computeArea() = 0;
        virtual float computePerimeter() = 0;
        Shape(){};
        virtual ~Shape(){};
};

class Triangle : public Shape{
    public:
        Triangle() : Shape(){
            d1 = 0;
            d2 = 0;
        }
        void initialize(){
            cout << "Enter base and height: " << endl;
            cin >> d1 >> d2;
        }
        float computeArea(){
            return (0.5 * d1 * d2);
        }
        float computePerimeter(){
            return (d1 + d2 + sqrt(pow(d1,2) + pow(d2, 2)));
        }
};

class Rectangle : public Shape{
    public:
        Rectangle() : Shape(){
            d1 = 0;
            d2 = 0;
        }
        void initialize(){
            cout << "Enter width and height: " << endl;
            cin >> d1 >> d2;
        }
        float computeArea(){
            return (d1 * d2);
        }
        float computePerimeter(){
            return (2 * (d1 + d2));
        }
    };
    
int main()
{
    Shape *s;
    s = new Triangle();
    s->initialize();
    cout << "Area = " << s->computeArea() << endl;
    cout << "Perimeter = " << s->computePerimeter() << endl;
    delete s;

    s = new Rectangle();
    s->initialize();
    cout << "Area = " << s->computeArea() << endl;
    cout << "Perimeter = " << s->computePerimeter() << endl;
    return 0;
}