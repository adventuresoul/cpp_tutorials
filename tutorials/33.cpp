// operator overloading stack
#include<iostream>
using namespace std;
class Stack{
    int size , top;
    int *stack;
    public:
        Stack(int n){
            this->size = n;
            this->top = -1;
            this->stack = new int[size];
        }
        void operator + (int x){    //push  (+ requires two operands, here object itself and x are operands)
            if (top == size - 1){
                cout << "Stack overflow: " << endl;
                return;
            }
            this->stack[++top] = x;
        }
        int operator--(int){        //pop   (-- unary operator)
            if(top == -1){
                cout << "stack empty" << endl;
            }
            else{
                cout << stack[top--];
            }
        }
        friend void operator<<(ostream &out , Stack st){
            for(int i = st.top; i >= 0; i--){
                out << st.stack[i] << endl;
            }
            out << endl;
            //return out;
        }
        friend istream& operator>>(istream &IN , Stack st){     // if you use the argument or not , it doesn't matter!
            if (st.top == -1){
                cout  << "Stack underflow: " << endl;
            }
            cout << "popped element: " << st.stack[st.top] << endl;
            st.top--;
            return IN;
        }
        ~Stack(){
            delete[] stack;
        }
};


int main(){
    Stack st(5);
    st + 5;
    st + 6;
    st + 7;
    cout << st;
    st--;
    
    return 0;
}