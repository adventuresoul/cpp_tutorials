#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<int> array(5, 6);
    array.push_back(1);
    array.push_back(2);
    array.push_back(3);
    array.push_back(4);
    array.push_back(5);
    array.pop_back();   // removes the last element
    
    for (auto it = array.begin(); it != array.end(); it++){
        cout << *it << " ";
    }
    cout << endl;
    for (auto it : array){
        cout << it << " ";
    }
    
    cout << "size = " << array.size() << endl;

    int target = 3;
    //vector<int> :: iterator it;
    array.erase(array.begin() + target);
    for (auto it : array){
        cout << it << " ";
    }
    cout << endl;
    cout << array.empty() << endl;

    int element_to_find = 3;
    auto it = find(array.begin(), array.end(), element_to_find);
    if(it != array.end()){

        cout << "element found " << *it << endl;
        int index = distance(array.begin(), it);
        cout << "found at index = " << index << endl;
    }
    else{
        cout << "element not found in array" << endl;
    }
    return 0;
}