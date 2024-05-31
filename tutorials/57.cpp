// nested try and catch
#include<iostream>
using namespace std;

int main()
{
    try{
       cout << "Welcome ! " << endl; 
       try{
        cout << "inner try block" << endl;
        throw 10; 
       }
       catch(int x){
        cout << "inner throw received: " << x << endl;
        throw x;
       }
    }
    catch(int x){
        cout << "outer throw received : " << x << endl;
    }
    
    return 0;
}

// python errors and cpp errors
// python
/* try, except, raise, else, finally
1.SyntaxError
2.IndentationError
3.NameError -> variable name not found or declared
4.TypeError -> wrong asssignment
5.ValueError -> inappropritate values
6.ZeroDivisionError
7.FileNotFoundError
8.IndexError
9.KeyError -> dictionaries
*/
// cpp
/* try, throw, catch
1.bad_alloc
2.out_of_range
3.invalid_argument
4.runtime_error  -> division by zero, type errors
5.logic_error -> assertion faliures
6.bad_cast 
*/
