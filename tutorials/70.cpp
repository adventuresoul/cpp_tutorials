// namespace

#include<iostream>
using namespace std;


namespace ledger1{
    class Base{

    };
    class Derived{

    };
}

namespace ledger2{
    class Base{

    };
    class Derived{

    };
}

int main()
{
    //Base b;     // leads to ambiguity error
    // instead ledger1 :: Base obj;
    using namespace ledger1;
    Base obj;
    return 0;
}


// if namespace has really large name
// namespace x = long_named_namespace... alias