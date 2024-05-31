// new and delete function are used to dynamically allocate memory in heap area 
// in c, malloc and free function are used to do the same
#include<iostream>
using namespace std;
int main()
{
    int *ptr;
    ptr = new int[5];   // pointer name = new datatype[size];
    for(int i=0;i<5;i++)
    {
        cin >> *(ptr+i);    // need to dereference the pointer while taking input in cpp
    }                       // in c syntax= scanf("%d",(ptr+i));
    for(int i=0;i<5;i++)
    {
        cout<< *(ptr+i) << endl;
    }
    delete[] ptr; // when delete is called, the ptr stil points to same address but memory is nullified
    //cout << *ptr;    -> would give error or nullptr
    // to delete array -> delete[] ptr; OS will remeber the memory it allocates, so [] empty brackets , the compiler would understand
    return 0;
}

// difference between new and malloc
/*
1. Calling Constructors: new calls constructors, while malloc() does not. In fact primitive data types (char, int, float.. etc) can also be initialized with new as the instance of primitive datatype would be created. 

2. operator vs function: new is an operator, while malloc() is a function.

3. return type: new returns exact data type, while malloc() returns void * (dangling pointer).

4. Failure Condition: On failure, malloc() returns NULL where as new throws bad_alloc exception.

5. Memory: In case of new, memory is allocated from free store where as in malloc() memory allocation is done from heap.

6. Size: Required size of memory is calculated by compiler for new, where as we have to manually calculate size for malloc().

7. Buffer Size: malloc() allows to change the size of buffer using realloc() while new doesn’t do.
*/