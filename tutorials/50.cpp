// templates
#include<iostream>
using namespace std;

template <class t>
t sum(t a[], int size){
    t s= 0;
    for (int i = 0; i < size; i++){
        s += a[i];
    }
    return s;
}

int main()
{
    int arr1[5] = {1, 2, 3, 4, 5};
    float arr2[5] = {1.0, 2.0, 3.0, 4.0, 5.5};
    cout << "Integer array sum = " << sum(arr1, 5) << endl;
    cout << "Float array sum = " << sum(arr2, 5) << endl;
    return 0;
}