// member functions with argument and return values
#include<iostream>
using namespace std;
class numbers
{
    int a,b;
    public:
        void read_numbers(int x,int y);
        void display_numbers();
        int get_largest();
};
void numbers::read_numbers(int x,int y)
{
    a = x;
    b = y;
}
void numbers::display_numbers()
{
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;
}
int numbers::get_largest()
{
    if(a>b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
int main()
{
    numbers n1;
    n1.read_numbers(4,5);
    n1.display_numbers();
    int z = n1.get_largest();
    cout<<"Largest number is = "<< z <<endl;
    return 0;
}