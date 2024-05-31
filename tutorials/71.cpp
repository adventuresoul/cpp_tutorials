// assignment operator overloading
#include<iostream>
#include<string.h>
using namespace std;

class String {
    char* word;

public:
    String() : word(nullptr) {}

    String(const char* x) {
        word = new char[strlen(x) + 1];
        strcpy(this->word, x);
    }

    String(const String& x) {
        cout << "copy constructor called" << endl;
        word = new char[strlen(x.word) + 1];
        strcpy(word, x.word);
    }

    ~String() {
        delete[] word;
    }

    void show() {
        cout << "The word is " << word << endl << " and the length is " << strlen(word) << endl;
    }

    String& operator=(const String& s) {
        if (this != &s) {
            delete[] this->word;
            word = new char[strlen(s.word) + 1];
            strcpy(this->word, s.word);
        }
        return *this;
    }
};

int main() {
    String word1("vinay");
    String word2("Sharma");
    word2 = word1;
    word1.show();
    word2.show();
    return 0;
}


/*
In C++, the copy constructor and the copy assignment operator (operator=) serve different purposes, and both may be needed depending on the context. Here's why you need both:

Copy Constructor:

The copy constructor is called when a new object is being created as a copy of an existing object. For example, when you initialize one object with another or when you pass an object by value to a function.
It allows you to create a new object with the same values as the original, effectively duplicating it.

Copy Assignment Operator (operator=):

The copy assignment operator is called when you want to copy the value of one object into an existing object. For example, when you do obj1 = obj2;, you are assigning the value of obj2 to obj1.
It is used to replace the content of an existing object with the content of another object, possibly releasing resources held by the existing object before copying.
*/