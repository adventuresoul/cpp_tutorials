#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

bool is_empty_vector(vector <int> &arr){
    return arr.empty();
}

int number_of_elements(vector <int> &arr){
    return arr.size();
}

void insert(vector <int> &arr, int x){
    arr.push_back(x);
}

void remove(vector <int> &arr, int pos){
    arr.erase(arr.begin() + pos);
}

int find_index(vector <int> &arr, int elt){
    int index = -1;
    for (int i = 0; i < arr.size(); i++){
        if (arr[i] == elt){
            return i;
        }
    }
    return -1;
}

void random(){
    vector <int> random;
    int size = rand() % 100;
    for (int i = 0; i < size; i++){
        random.push_back(rand() % 100);
    }
    int sum  = 0;
    for (auto elt : random){
        sum += elt;
        cout << elt;
    }
    cout << "sum = " << sum << endl;
    sort(random.begin(), random.end());
    for (auto elt : random){
        cout << elt;
    }
}

int main()
{
    vector <int> arr;    
    is_empty_vector(arr);
    insert(arr, 5);
    insert(arr, 7);
    cout << number_of_elements(arr) << endl;
    remove(arr, 1);
    cout << find_index(arr, 5);
    random();
    return 0;
}