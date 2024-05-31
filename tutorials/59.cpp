// changing the contents of the class by explicit means
#include<iostream>
using namespace std;

class Distance{
    int feet;
    float inches;
    public:
        void get_measurement(int x, float y){
            this->feet = x;
            this->inches = y;
        }
        void show_measurement(){
            cout << feet << "-" << inches << endl;
        }
};
int main()
{
    Distance d;
    d.get_measurement(5, 6.6);
    d.show_measurement();
    char *ptr = (char *)&d;
    *ptr = 1;
    d.show_measurement();  
    return 0;
}