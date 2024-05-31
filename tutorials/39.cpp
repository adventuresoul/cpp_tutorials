// hierarchical inheritabce
#include<iostream>
using namespace std;

class Account{
    int acc;
    string name;
    public:
        void get_account(){
            cout << "Enter name and account_number: " << endl;
            cin >> name >> acc;
        }
        void put_account(){
             cout << "Name: " << name << endl << "account number: " << acc << endl; 
        }
};

class Savings : public Account{
    float min_bal;
    public:
        void get_bal(){
            cout << "Enter balance: " << endl;
            cin >> min_bal;
            if(min_bal < 500){
                cout << "Balance low min 500" << endl;
            }
            else{
                cout << "Account created" << endl;
            }
        }
};

class Current : public Account{
    float min_bal;
    public:
        void get_bal(){
            cout << "Enter balance: " << endl;
            cin >> min_bal;
            if(min_bal < 1000){
                cout << "Balance low min 500" << endl;
            }
            else{
                cout << "Account created" << endl;
            }
        }
};

int main()
{
    int op;
    cout << "1.Savings\n";
    cout << "2.Current\n";
    cout << "Enter option." << endl; cin >> op;
    if(op == 1){
        Savings s;
        s.get_account();
        s.get_bal();
        s.put_account();
    }
    else{
        Current c;
        c.get_account();
        c.get_bal();
    }
    return 0;
}