// program to add and subtract distances

// In C++, an inline member function is a function defined inside a class declaration and marked with the inline keyword. This keyword suggests to the compiler that the function's code should be inserted directly at each call site instead of being called like a regular function. It's a form of optimization that can reduce function call overhead, especially for small, frequently used functions.

#include<iostream>
using namespace std;
class measurement
{
    int kiloMeter,meter;
    public:
        void get_measurement();
        void put_measurement();
        measurement add_distances(measurement m);
        measurement subtract_distances(measurement m);
};
inline void measurement::get_measurement()      // two ways for inline either within class or prototyping and then later defyning it with inline keyword outside class
{
    cout << "Enter the measurements [km,m]" << endl;
    cin >> kiloMeter;
    cin >> meter;
}
inline void measurement::put_measurement()
{
    cout << "Distance => :" << endl << "KM = " << kiloMeter << "  " << "M = " << meter << endl;
}
inline measurement measurement::add_distances(measurement m2)
{
    measurement temp;               
    temp.kiloMeter = this->kiloMeter + m2.kiloMeter;        // temp.kiloMeter is legal because add_distance is member function of class measurement, as a member function it can access private data members also
    temp.meter = this->meter + m2.meter;
    if(temp.meter > 1000)
    {
        temp.kiloMeter++;
        temp.meter = temp.meter % 1000;
    }
    return temp;
}
inline measurement measurement::subtract_distances(measurement m)
{
    
}
int main()
{
    measurement m1,m2,m3;  // creating objects
    m1.get_measurement();
    m1.put_measurement();
    m2.get_measurement();
    m2.put_measurement();
    // adding distances
    m3 = m1.add_distances(m2);
    m3.put_measurement();
    return 0;
}