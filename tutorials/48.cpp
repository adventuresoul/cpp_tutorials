// templates or generics
#include<iostream>
using namespace std;

// template <class t>
//return data_type(parameters) { ... }

template <class t>
t sum(t a, t  b){
    return a + b;
}

int main()
{
    cout << "int sum = " << sum(5 , 9) << endl;
    cout << "float sum = " << sum(9.0, 5.6) << endl;
    return 0;
}


/*
In C++, templates are a powerful feature that allow you to write generic code that can work with different data types. There are primarily two types of templates in C++:

1. **Function Templates:**
   - Function templates allow you to define a template for a function, where one or more of its parameters can be of a generic data type.
   - When you use a function template, the C++ compiler generates a specialized version of the function for the specific data types you use in your code.
   - Function templates are defined using the `template` keyword and typically include a type parameter.
   - Example:
     ```cpp
     template <typename T>
     T add(T a, T b) {
         return a + b;
     }
     ```

2. **Class Templates:**
   - Class templates enable you to define a template for a class, where one or more of its member variables or member functions can use generic data types.
   - Like function templates, when you use a class template, the C++ compiler generates a specialized version of the class for the specific data types you use.
   - Class templates are defined using the `template` keyword and can include one or more type parameters.
   - Example:
     ```cpp
     template <typename T>
     class MyContainer {
     public:
         MyContainer(T value) : data(value) {}
         T getData() { return data; }
     private:
         T data;
     };
     ```

In addition to these two primary types of templates, there's also a concept known as "template specialization" in C++, which allows you to provide custom implementations for specific data types while still using a template. This can be useful when you need to handle certain data types differently within your generic code.

C++ templates are a powerful tool for creating generic, reusable code that can work with various data types while maintaining type safety and code efficiency.*/