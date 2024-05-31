#include<iostream>
using namespace std;

template <class T>
void sort(T *arr, int size){
    for (int i = 1; i < size; i++){
        T value = arr[i];
        int hole = i;
        while (hole > 0 && arr[hole - 1] > value){
            arr[hole] = arr[hole - 1];
            hole--;
        }
        arr[hole] = value;
    }
}

template <class T>
int search(T (&arr)[6], T value, int l,int h){
    if(l > h){
        return -1;
    }
    int mid = (l + h) / 2;
    if(arr[mid] == value){
        return mid;
    }
    else if (arr[mid] > value){
        return search(arr, value, l, mid - 1);
    }
    else if(arr[mid] < mid){
        return search(arr, value, mid + 1, h);
    }
    
}
template <class T>
T* co_ordinate(T x1, T y1, T x2, T y2){
    T *result = new T[2];
    result[0] = x1 + x2;
    result[1] = y1 + y2;
    return result;
}

int main()
{
    double arr[] = {3.3, 6.6, 11.2, 55.5, 99.2, 101.22};
    cout << search(arr, 11.2, 0, 5);
    
    return 0;
}