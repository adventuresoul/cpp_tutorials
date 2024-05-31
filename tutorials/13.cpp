// program to access the private members of a class
// The way to call a private member is through calling it inside another public member function
#include<iostream>
using namespace std;
class emp
{
    private:
        char name[20];
        int id;
        void getemp()
        {
            cout<<"Enter name and ID of the employee"<<endl;            //member function is also private here, so in order to invoke this function it is called inside another public function
            cin>>name>>id;
        }
    public:
        void putemp()
        {
            getemp();
            cout<<"Name = "<< name << endl << "ID = " << id << endl;
        }
};
int main()
{
    emp obj;
    obj.putemp(); // calling public function of class , which in turn calls the private member function
    return 0;
}
