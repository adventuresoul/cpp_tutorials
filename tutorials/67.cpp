// error handling , throwing class type exceptions
#include<iostream>
#include<math.h>
using namespace std;


class gmean{};
class hmean{};

float geometric_mean(float &a, float &b){
    if(a * b < 0){
        throw gmean();
    }
    return (sqrt(a * b));
}

float harmonic_mean(float &a, float &b){
    if (a == -b){
        throw hmean();
    }
    return (2.0 * (a * b) / (a + b));
}

void read_numbers(float &a, float &b){
    cout << "Enter two float numbers: " << endl;
    cin >> a >> b;
    if (cin.fail()){
        throw runtime_error("Invalid input");
    }
}

int main()
{
    float a, b;
    char choice;
    while(choice != 'n'){
        try{
            read_numbers(a, b);
            cout << "Geometric mean = " << geometric_mean(a, b) << endl;
            cout << "Harmonic mean = " << harmonic_mean(a, b) << endl;
        }
        catch(const exception &e){
            cout << e.what() << endl;
            break;
            
        }
        catch(hmean x){
            cout << "exception error -> a = -b not allowed" << endl;
            cout << "Enter freah pairs" << endl;
        
        }
        catch(gmean x){
            cout << "exception error -> a*b < 0 not allowed" << endl;
            cout << "Enter freah pairs" << endl;
        
        }
        cout << "Do you want to continue? (y / n)" << endl;
        cin >> choice;
    }
      
    return 0;
}