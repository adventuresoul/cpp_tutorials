// friend function
#include<iostream>
using namespace std;
class simple; 

class sample
{
    public:
        int a,b;
        void get_values()
        {
            cout << "Enter the values of a and b" << endl;
            cin >> a >> b;
        }
        friend void get_bigger(sample &obj1, simple &obj2); // can be anywhere in public , private or protected
        // paramteres must be present, since it cannot be called with respect to any instance
};

class simple
{
    public:
        int a,b;
        void get_values()
        {
            cout << "Enter the value of a and b" << endl;
            cin >> a >> b;
        }
        //friend void get_bigger(sample obj1, simple obj2);
};
void get_bigger(sample &s1 , simple &s2)    // friend keyword should not appear here
{
    (s1.a > s2.a) ?  cout << "a of s1 is bigger" : cout << "a of s2 is bigger";
    cout << endl;
    (s1.b > s2.b) ?  cout << "b of s1 is bigger" : cout << "b of s2 is bigger";
}

int main()
{
    sample s1;
    simple s2;
    s1.get_values();
    s2.get_values();
    get_bigger(s1,s2);
    return 0;
}

// friend function can also be the member function of other class

class A;

class B{
    A *aptr;
    public:
        void map(const A* const);
        void test_friend(const int = 0);
};

class A{
    int x;
    public:
        friend B :: test_friend(const int = 0);     // don't define test_friend in class B                        
};