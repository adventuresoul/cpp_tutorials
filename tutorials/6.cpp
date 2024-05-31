// Functions with default arguments
// c++ allows the to define a functions without passing all the parameters. 
// c++ and .net supports functions with default argument concept.
 #include<iostream>
 using namespace std;
 int add(int x=0,int y=0,int z=0);  // the default arguments must be from right to left
 int main()
 {
     cout<< "sum= "<< add(10,20,30)<< endl;  // using function call in different ways is function polymorphism
     cout<<"sum= "<< add(10,20)<<endl;
     cout<<"sum= "<< add()<<endl;
     return 0;
 }
 int add(int x,int y,int z)
 {
     return x+y+z;
}

// simple interest calculator
// #include<iostream>
// using namespace std;
// int si(float p=1000,float t,float r)         // gives error beacause should be from right to left
// {
//     return (p*t*r)/100.00;
// }
// int main()
// {
//     cout<<"SI = "<<si(2000.00,3.5,3.2);
//     return 0;
// }

 /*In function 'int si(float, float, float)':
6.cpp:21:5: error: default argument missing for parameter 2 of 'int si(float, float, float)'
 int si(float p=1000,float t,float r)
     ^~
6.cpp:21:5: error: default argument missing for parameter 3 of 'int si(float, float, float)'*/