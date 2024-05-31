// friend class(friendship is not transitive) and can be used to bridge two totally unrelated class
// friend function 
#include<iostream>
using namespace std;

class Support;

class TwoValues{         // container class(composition)
    int a , b;
    public:
        TwoValues(int i , int j){
            this->a = i;
            this->b = j;
        }
    friend class Support;
};

class Support{
    public:               // contained class(composition)
        int min_of(TwoValues &obj){
            return obj.a < obj.b ? obj.a : obj.b;       // the only diff here is by being friend with above class,
                                                        // you have privilage to access private member a and b
        }
};

int main(){
    TwoValues obj(4 , 5);
    Support x;
    int z = x.min_of(obj);
    cout << z;

    return 0;
}

// some more example
class Author{     // container
    string aname;
    friend class Book;
};
class Book{   // contained
    string bookname;
    float price;
    Author a; // composition -> defining obj of class in another class
    /*
No, you cannot define a constructor of one class within a friend class. The purpose of a friend class is to allow access to the private and protected members of another class, but it does not grant the ability to define constructors or member functions of the class it is befriending.*/
    public:
        void get_data(string aname , string book_name , float price){
            a.aname = aname;
            bookname = book_name;
            this->price = price;
        }
};
int main(){
    Book b;
    b.get_data("Vinay" , "My life my rules" , 150);
    return 0;
}