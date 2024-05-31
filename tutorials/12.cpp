// this pointer :
/* It returns the address of the object
   and is used to distinguish between data members from local variables
*/
/*
#include<iostream>
using namespace std;
class test
{
    int a,b;
    public:
    void show();
};
void test::show()
{
    a = 10;
    b = 20;
    cout<<"Object addresss is "<< this<< endl;
    cout<<"the value of a is "<< this->a << endl;
    cout << "the value of b is "<< this->b << endl;
}
int main()
{
    test t;
    t.show();
    return 0;
}*/
//
/*
#include<iostream>
using namespace std;
class test
{
    int a,b;
    public:
    void show(int a,int b)
    {
        a = a;                                          // always local variables have first priority a is copied to a , not to data member a 
        b = b;                                          // to solve this, this pointer is used
    }
    void display()
    {
        cout<< "a = "<< a << ends << "b = "<< b <<endl;
    }
};
int main()
{
    test t;
    t.show(10,20);
    t.display();
    return 0;
}*/
//
#include<iostream>
using namespace std;
class test  // check for sizeof(test) = 1 byte
{
    int a,b;
    public:
    void show(int a,int b)
    {
        this->a = a;                                          // this->a == (*this).a
        this->b = b;                                          
    }
    void display()
    {
        cout<< "a = "<< a << ends << "b = "<< b <<endl;
        cout << "size = " << sizeof(test) << endl;
        cout << "location = " << this;
    }
};
int main()
{
    test t;
    t.show(10,20);
    t.display();
    return 0;
}

/*
    class Distance{
    private:
        int iFeet;
        float fInches;
    public:
        void setFeet(int);
        void setInches(float);
        int getFeet();
        float getInches();
};        
    CONVERTED TO ->
                struct Distance{
                    int iFeet;
                    float fInches;
                };
                void setFeet(Distance * const, int);
                void setInches(Distance * const, float);
                int getFeet(Distance * const);
                float getInches(Distance * const);
    Definition part ->
            void Distance :: setFeet(Distance * const this, int x){
                this->iFeet = x;
            }
            and so on...........

        the this pointer should continue to point to same object throughout it's lifetime , that's why compiler creates const pointer

    // this operator has two behaviours ->
    // 1. when it is used to access data_member -> it behaves just as normal 
    // 2. when it is used to call function -> it passes the address of the object as a leading const formal parameter to function call
*/