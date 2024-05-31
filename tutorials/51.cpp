// template overloading
#include<iostream>
using namespace std;

template <class t>
t sum(t a , t b){
    return a + b;
}

template <class t>
t sum(t a, t b, t c){
    return a + b + c;
}

string sum(string a, string b){
    return a + b;           
}

int main(){
    cout << "Two int sum = " << sum(10, 20) << endl;
    cout << "Two float sum = " << sum(1.1, 2.2) << endl;
    cout << "Three float sum = " << sum(1.1, 2.2, 3.3) << endl;
    cout << sum("vinay", "kv") << endl;     // sometimes the template function has to be overrided
    return 0;
}