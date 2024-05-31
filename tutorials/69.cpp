// nested class

class A{
    int a;
    class B{
        int b;
    };
};

// how to declare object of class B
int main(){
    A :: B obj; // object creation of class B doesn't create an instance of class A
}


// even though classes are nested , they don't have rights to access each others private data , unless they are friends


// the size of object enclosing class is not affected by the presence of nested class
