// c allows user to create their custom data types using structure , union , typedef , enum and bit-field
// ########### know the difference between structure and union and enum etc.....
// cpp structures 
// structures - user derived data-type, it can store both variables and functions
// structure is just a blue print , structure variable is instance of the structure
// without variable it doesn't have memory in stack
// structure data is public by default
#include<iostream>
using namespace std;
struct student{
    int roll_number;
    char name[20];
    void get_details()
    {
        cout<<"Enter name:"<<endl;
        cin>>name;
        cout<<"Enter roll_number"<<endl;                        
        cin>>roll_number;
        cout<<"Name: "<<name<<endl;
        cout<<"ID: "<<roll_number<<endl;
    }
};
int main()
{
    student s;          // in cpp you can omit struct; 
    s.get_details();                            
    return 0;
}
/*
typedef struct student
{
    int roll;
    char name[20];
};
now student is individual data type;
student list;
now list is variable of student data-type;
*/
// typedef struct node{        size of struct is (x = 8) + (y = 8) +sizeof(next) address usually 8 bytes = 24 bytes
//     int x,y;
//     node* next;
// };