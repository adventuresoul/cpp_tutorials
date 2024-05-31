// constructors and destructors
#include<iostream>
// #include<time.h>
using namespace std;
class circle
{
    // when constructor is called , it creates seperate block of memory for object size and copies the object , so that the instance and parameter object will not point at same time
    public:
    float r;
        circle()            // constructor with no parameters  , this is must , should be declared before parameterized constructor if it's not declared , when object is created with no argument "no matching constructor error" arises.
        {   
        
        }
        /*
        circle(int x = 0)   // constructor with default arguments, this should not be declared if zero argument constructor is defined. Or else it would lead to ambiguity error
        {
            this->r = x;
        }*/
        circle(float r)       // parameterized constructor      // suppose r is pointing to 0xff , now r will point to oxhh where content is copied from 0xff
        {
            this->r = r;
        }
        ~circle()           // destructor
        {
            cout << "radius was " << r << endl;
            // delete *r;
        }
        void area()
        {
            float area = 3.14 * r * r;
            cout << "Area =  " << area << endl;
        }
};
// you cannot call destructor. Its main purpose is to release any resources or clean up any allocated memory associated with the object before it is destroyed. 

// if any memory used by out of scope location, we can delete the pointer pointing to that location by member pointer inside destructor
int main()
{
    // time_t start,end,elapsed;
    // time(&start);
    circle c1;
    circle c4 = 7.5;    // implicit conversion of float into circle object by compiler, cannot be possible if explicit constructor is defined
    c1.area();
    circle c2(6.0);
    c2.area();
    cout <<  "The radius is " << c2.r << endl;
    // time(&end);
    // elapsed = end - start;
    // cout << elapsed << " ns  " << endl;
    return 0;
}