// static members
// the only data member which can be assigned with a value inside a class is integral static member
// the only class variable which can be sent as default value
// initialized with 0 
#include<iostream>
using namespace std;
class Test{
   public:
      static int count;   // declared in public
    // integral static members can be initialized inside class, however it still has to be defined outside
    // non static data members can also access static data members
    
         
         Test(){
            count++;
            cout << "Id : " << count << endl;
         }
         ~Test(){
            count--;
         }
         
    
}; 
int Test ::count = 9;  // defined
int main(){
    Test t1 , t2;
    cout << Test::count << endl;
    return 0;
} 

/*Static data members can be declared as either public or private, depending on the desired access level and encapsulation of the class.

If a static data member is declared as public, it can be accessed directly from anywhere in the code, even without an instance of the class. Other classes or functions can access and modify the static data member without any restrictions. This approach provides less encapsulation and may increase the coupling between classes.

On the other hand, if a static data member is declared as private, it can only be accessed within the class itself and by friend classes or member functions. This approach encapsulates the static data member, ensuring that it's access and modification are controlled by the class itself. Other parts of the code need to use member functions or friend classes to interact with the static data member.

In general, it is a good practice to make static data members private unless there is a specific need to expose them publicly. By keeping them private, you have more control over their usage and can enforce data integrity and consistency through member functions and friend classes.

Is static constructor called only once?
A static constructor is used to initialize any static data, or to perform a particular action that needs to be performed only once. It is called automatically before the first instance is created or any static members are referenced. A static constructor will be called at most once.
*/