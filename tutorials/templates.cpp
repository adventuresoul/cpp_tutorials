#include<iostream>
using namespace std;

template <class t>
void insertion_sort(t *arr, int size){
    for (int i = 1; i < size; i++){
        t value = arr[i];
        int hole = i;
        while(hole > 0 && arr[hole - 1] > value){
            arr[hole] = arr[hole - 1];
            hole--;
        }
        arr[hole] = value;
    }
    
}

int main()
{
    int intArr[] = {12, 11, 13, 5, 6};
    double doubleArr[] = {3.14, 1.618, 2.718, 0.577};
    char charArr[] = {'d', 'b', 'a', 'c'};

    int intSize = sizeof(intArr) / sizeof(intArr[0]);
    int doubleSize = sizeof(doubleArr) / sizeof(doubleArr[0]);
    int charSize = sizeof(charArr) / sizeof(charArr[0]);


    insertion_sort(intArr, intSize);
    insertion_sort(doubleArr, doubleSize);
    insertion_sort(charArr, charSize);

    std::cout << "Sorted int array: ";
    for (int i = 0; i < intSize; ++i) {
        std::cout << intArr[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "Sorted double array: ";
    for (int i = 0; i < doubleSize; ++i) {
        std::cout << doubleArr[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "Sorted char array: ";
    for (int i = 0; i < charSize; ++i) {
        std::cout << charArr[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}