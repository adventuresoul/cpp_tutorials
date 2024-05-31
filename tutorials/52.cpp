// generic class
#include<iostream>
using namespace std;

template <class t>
class Test{
    // data-type var1, var2, var2
    t a, b;
    public:
        Test(t a, t b){
            this->a = a;
            this->b = b;
        }
        t sums();
        // declaration
};

// memeber function definition conducted outside class, again should use template header
template <class t>
t Test<t> :: sums(){
    return a + b;
}

int main(){
    Test <int> t1(5, 3); // standard template library is made using this concept
    cout << "sum = " << t1.sums() << endl;
    return 0;
}

// SOME RULES GOVERNING TEMPLATES
// 1. more than one template-type argument in a class template
//  template <class t, class v>  class x{};

//2.non type template argument in a class template
//  template<class t, int v> sort(t[], 5)

//3.error due to duplicate template type arguments
// template <class t, class t>

//4.same name can be used for a type template argument in more than one class template   and vice versa
//  template<class t>  class x{};
//  template<class t>  class y{};

//5.formal argument of template class can be object of template
// template<class t>    return-type function(s<t>, ....)

//6.nested class template
//  template <class t>
//  class x{ class y{};  };