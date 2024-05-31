// program to demonstrate dynamically creating objects                                          
// you can still use static methods, but stack memory is limited
#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;
class book
{
    char name[1000];
    int price;
    public:
        void get_details();
        void put_details();
};
void book::get_details()
{
    cout<<"Enter Book name"<<endl;
    cin.getline(name,1000);                             // problem
    cout<<"Enter the price"<<endl;
    cin>>price;
}
void book::put_details()
{
    cout<<name<<"     "<<price<<endl;
}
int main()
{
    int size;
    cout<<"Enter number of books"<<endl;
    cin>>size;
    book* list = new book[size];            // new <class-name>[size] operator accepts size as parameter
    for(int i=0;i<size;i++)
    {
        list[i].get_details();
    }
    cout<<"printing the list"<<endl;
    for(int i=0;i<size;i++)
    {
        list[i].put_details();
    }
    delete[] list;
    return 0;
}