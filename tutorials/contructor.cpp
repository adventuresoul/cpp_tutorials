// concept of constructors
/*
    Automatic initialization of object but it doesn't allocate memory for objects
    In a class in cpp , you cannot assign value to variables directly, you need to use member functions in public to assign values to them
    if you don't want to call member function and still want to automatically assign value to atrributes, constructor comes into picture
    constructors are only called for objects, not for pointer variables etc..
    class test
    {
        int a,b;
        public:
            test()              constructor should always be in public area
            {
                a = 20;
                b = 40;
            }
        void show()
        {
            cout<<a<<endl<<b;
        }
    };
    int main()
    {
        test s;         now automatically the values are assigned and we cannont call constructor for object .
        .
        // compiler -> s.test()  -> test(&s);
        return 0;
    }
    
    rules for making constructor
    ----------------------------
    1.the name should be equivalent to class name.
    2.constructor never has any return data type including void.
    3.constructor invoked automatically when object of that class is created.
    4.constructors and destructors both should be declared in public area.
    5.it may or may not have arguments.
    6.constructors never participate in inheritance.
    7.we are not able to find out the address of constructors(including this pointer also).
    8. they make implicit calls to new and delete operators
    9.it is executed only once.
    10.they never invoke with the object name, don't call the constructor
    11.overloading

    Three types of constructors
    ----------------------------
    1.default -> (system defined , user defined)


    // exceptions:
     Constructors can be private, for example, we make copy constructors private when we don't want to create copyable objects. The reason for not making copyable object could be to avoid shallow copy

*/
