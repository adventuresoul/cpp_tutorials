// overloading unary operator
#include<iostream>
using namespace std;

namespace oops{
class Test{
    int a;
    public:
        Test(){
            a = 0;
        }
        void operator ++ (){
            ++this->a;
            //return *this;
        }
        Test operator -- (){
            --a;
            return *this;
        }
        Test operator ++ (int){
            a++;
            return *this;
        }
        Test operator -- (int){
            a--;
            return *this;
        }
        void show(){
            cout << "a = " << a << endl;
        }
};
};

int main(){
    using namespace oops;
    Test t;
    t.show();
    ++t;
    t.show();
    Test sample = t++;  // since it returns the object, you can define copy constructor
    t.show();
    return 0;
}


/*When overloading the post-increment operator (`++`), it is common practice to include an additional `int` parameter in the function signature. This is not a required parameter for the operator to function correctly, but it serves as a differentiating factor between the pre-increment and post-increment operators.

The `int` parameter acts as a dummy parameter, serving to distinguish the post-increment operator overload from the pre-increment operator overload. The presence of this parameter helps the compiler differentiate between the two versions of the operator when it encounters an expression involving the post-increment operator.

Consider the following code snippet:

```cpp
void operator ++ ();        // Pre-increment operator overload
void operator ++ (int);     // Post-increment operator overload
```

Without the `int` parameter, the compiler would not be able to distinguish between the two versions of the operator. Both operator overloads would have the same function signature, leading to a compilation error.

By including the `int` parameter, you provide a unique signature for the post-increment operator overload. The `int` parameter can be ignored inside the function body because it doesn't serve any purpose other than distinguishing the post-increment operator overload.

When you use the post-increment operator on an object, for example, `obj++`, the compiler will match it with the version of the operator that has the `int` parameter. Since the parameter is not used within the function, you can simply ignore it and perform the necessary logic to achieve the desired behavior of post-incrementing the object.

In summary, adding an `int` parameter when overloading the post-increment operator is a convention that helps differentiate between pre-increment and post-increment overloads and allows the compiler to correctly resolve the usage of these operators in expressions.*/