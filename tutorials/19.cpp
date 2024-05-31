// copy constructor
// it takes reference data type of object as a parameter
#include<iostream>
using namespace std;
class sample
{
    int a,b;
    public:
        sample(int a,int b)
        {
            this->a = a;
            this->b = b;
        }
        // or
        /*
        sample(sample s){
            *this = s;
        }
        */
        sample (const sample &old)    // should always be const good practice, because the pointed object should not change while deep copying. The reference should be passed, if not the copy constructor will once again triggers, leading to endless chain. (only if user defined copy constructor is there)
        {
            cout << "copy constructor called" << endl;  // actually you have to allocate a new space contents and copy the contents.
            a = old.a;
            b = old.b;
        }
        void show()
        {
            cout << a << endl;
            cout << b << endl;
        }
};
class info
{
    int a,b,c;
    public:
        info(int a = 10,int b = 20, int c = 30)     // constructor with default arguments
        {
            this->a = a;
            this->b = b;
            this->c = c;
        }
        void show()
        {
            cout << a << endl << b << endl << c << endl;
        }
};
int main()
{
    sample s1(10,20);
    sample s2(s1);  // now copy constructor is called , if it is not defined the compiler will make one
    sample s3 = s1; // now also copy constructor is called, because new object is being created from existing

    // the copy constructor is not called when assignment happens. In C++, the copy constructor is called when a new object is created as a copy of an existing object, 
    // typically using the syntax ClassName newObj = existingObj;

    s1.show();
    //s2.show();
    cout << "class 2" << endl;
    info i1(1),i2(3,3,3),i3(34,54);
    i1.show();
    i2.show();
    i3.show();
    return 0;
}

// when object is passed as argument(without reference) the function has to create a local variable, in that case it defines a variable and then copies the content of the parameter to local variable , in this case copy constructor is called.

// when the return type of function is of class type , the actual object returned when copied to another variable in main function , the copy constructor copies it.

// A copy constructor is called whenever a new variable is created from an object. This happens in the following cases (but not in assignment).


// DEEP COPY V/S SHALLOW COPY
/*

Shallow Copy:
In shallow copy, an object is created by simply copying the data of all variables of the original object. This works well if none of the variables of the object are defined in the heap section of memory. If some variables are dynamically allocated memory from heap section, then the copied object variable will also reference the same memory location.
This will create ambiguity and run-time errors, dangling pointer. Since both objects will reference to the same memory location, then change made by one will reflect those change in another object as well. Since we wanted to create a replica of the object, this purpose will not be filled by Shallow copy. 


Deep Copy:
In Deep copy, an object is created by copying data of all variables, and it also allocates similar memory resources with the same value to the object. In order to perform Deep copy, we need to explicitly define the copy constructor and assign dynamic memory as well, if required. Also, it is required to dynamically allocate memory to the variables in the other constructors, as well.



In C++, it is a good practice to make the arguments of a copy constructor constant whenever possible. The reason for this is to ensure that the original object being copied from cannot be modified unintentionally during the copying process.

Here's an example of a copy constructor with constant-type arguments:

```cpp
class MyClass {
public:
    // Copy constructor with constant reference parameter
    MyClass(const MyClass& other) {
        // Perform the copy operation
        // ...
    }
    
    // Other member functions and data members
};
```

Using `const` in the parameter declaration ensures that the original object referred to by `other` cannot be modified inside the copy constructor. This helps maintain the const-correctness of the program and prevents accidental modifications.

However, there may be cases where you need to modify the original object during the copying process, and in such cases, you may not declare the parameter as constant. But generally, it's advisable to keep the parameters of a copy constructor constant to follow best practices and reduce the risk of unintended side effects.
*/