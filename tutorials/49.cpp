// templates
#include<iostream>
using namespace std;

template <class t1, class t2>
float sum(t1 a, t2 b){
    return a + b;
}

int main()
{
    cout << "Sum = " << sum(9, 10) << endl;
    cout << "Sum = " << sum(9.0, 5.6) << endl;
    cout << "Sum = " << sum(9, 5.6) << endl;
    return 0;
}