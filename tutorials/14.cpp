// member function with class type return values
#include<iostream>
using namespace std;
class Test
{
    int a,b;
    public:
        void get_data();
        void put_data();
        Test* sum(Test *t);           // opearation on attributes of two objects has to be contained in another object
};
void Test::get_data()
{
    cout << "Enter a and b" << endl;
    cin>>a>>b;
}
void Test::put_data()
{
    cout << "a = " << a << endl << "b = "<< b <<endl;;
}
// return-type class-name::method-name(parameters)
Test* Test::sum(Test *t)
{
    Test *t3 = new Test();           
    t3->a = a + t->a;
    t3->b = b + t->b;                     // returns object
    return t3;
}
int main()
{
    Test t1,t2,t3;
    Test *a,*b,*c;
    a = &t1;
    b = &t2;
    c = &t3;
    a->get_data();
    b->get_data();
    c = a->sum(b);    // ==> t3 = t2.sum(t1);
    a->put_data();
    b->put_data();
    c->put_data();
    return 0;
}
// a->put_data()   ==  put_data(Test* const this) , this - contains address.