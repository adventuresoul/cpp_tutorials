//passing class type parameters (objects) to member functions
#include<iostream>
using namespace std;
// class get
// {
//     private:
//     void get_array(int* arr,int size)
//     {
//      for(int i = 0; i < size; i++)
//      {
//          printf("Enter %dth element\n");
//          scanf("%d",&arr[i]);
//      }
//     }
// };
class sample
{
    private:
        int a;
    public:
        void get_a()
        {
            cout<<"Enter the value of a"<<endl;
            cin>>a;
        }
        void put_a()
        {
            cout<<"a "<<a<<endl;
        }
        void greatest(sample s)
        {
            if(a > s.a) // here a refers to this->a
            {
                cout<<"s1.a is largest"<<endl;
            }
            else if(a < s.a)
            {
                cout<<"s2.a is largest"<<endl;
            }
            else{
                cout<<"Both are equal"<<endl;
            }
    }
};
int main()
{
    sample s1,s2;
    s1.get_a();
    s2.get_a();
    s1.greatest(s2);                //here object s2 is passed as argument 
    return 0;
}