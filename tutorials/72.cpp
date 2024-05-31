/*
In C++, late binding and early binding are two concepts related to function calls and method resolution:

1. **Early Binding (Static Binding):**
   - Early binding refers to the process of linking a function call to the actual function implementation at compile-time.
   - In C++, early binding is the default behavior when you call a function or method.
   - It is also called static binding because the association between the function call and the function implementation is determined at compile time.
   - Early binding is more efficient because the compiler can directly generate a call to the specific function, reducing runtime overhead.
   - It is suitable for non-virtual functions or when the type of object is known at compile-time.

   Example of early binding in C++:

   ```cpp
   class Base {
   public:
       void show() {
           cout << "Base class function" << endl;
       }
   };

   int main() {
       Base obj;
       obj.show(); // Early binding, calls Base::show() at compile time
       return 0;
   }
   ```

2. **Late Binding (Dynamic Binding or Runtime Polymorphism):**
   - Late binding refers to the process of linking a function call to the actual function implementation at runtime.
   - In C++, late binding is achieved by using the `virtual` keyword for member functions in a base class and then overriding those functions in derived classes.
   - Late binding is also known as dynamic binding or runtime polymorphism.
   - It allows you to call the appropriate derived class method based on the actual type of the object at runtime, providing flexibility and extensibility.
   - Late binding is suitable for scenarios where the type of object is determined at runtime, such as when working with polymorphic objects through base class pointers or references.

   Example of late binding in C++:

   ```cpp
   class Base {
   public:
       virtual void show() {
           cout << "Base class function" << endl;
       }
   };

   class Derived : public Base {
   public:
       void show() override {
           cout << "Derived class function" << endl;
       }
   };

   int main() {
       Base* ptr;
       Derived obj;

       ptr = &obj; // Pointing to a Derived object with a Base pointer
       ptr->show(); // Late binding, calls Derived::show() at runtime

       return 0;
   }
   ```

In summary, early binding occurs at compile-time and is resolved based on the static type of the object or reference, while late binding occurs at runtime and is resolved based on the actual type of the object, allowing for dynamic polymorphism. Late binding is a key feature in C++ where you use virtual functions and is essential for achieving polymorphic behavior.
*/