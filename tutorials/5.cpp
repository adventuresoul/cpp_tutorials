/* call by value 
    if a function is called by call by value , the values are copied , it means that it creates two variables in stack and later destroys the copied variable. Here the values of actual parameter are copied to formal parameter and these parameters store memory in different locations
    If you modify and print the value in main function the contents are not going to change
*/
 
/* call by address
    it is another way of doing call by reference , but the seperate memory address(another pointer) are allocated and it does change the content of variable  for eg.    add(&a,&b){} 
*/

/* call by reference
    here both formal and actual parameters refers to the same memory locations, if any changes are made , it will reflect , because we are accessing the actual address of a variable in stack and then changing it

    WARNING ->  Modifying that pointer inside the function will not change the pointer outside the function - however, modifying the object it points to will change the object outside the function
*/

/* difference between call by adress and call by reference
    both does the same job , but in call by address another copy of adress(pointer) , anyhow the formal parameter is pointing to same variable, so the changes made are reflected

Memory allocation:
Besides, in the call by address, the memory is allocated for both actual arguments and formal parameters whereas, in the call by reference, the memory is allocated only for actual arguments and formal parameters share that memory. 
*/

// call by reference is different in c and cpp <visit alink = "https://stackoverflow.com/questions/13654138/what-exactly-is-the-difference-between-pass-by-reference-in-c-and-in-c#:~:text=Unlike%20in%20C%2C%20where%20passing,are%20using%20a%20reference%20type."

/* reference data type in cpp
    link variables , alias variables
    syntax:
        datatype  &variable = variable (here & is address it is reference / alias)

        reference datatype should be initialized at the time of declaration -> int a=100; int &b = a; 
    (if a=100 then b=100 and b=90 then a=90) 
    a pointer can point to multiple variables , reference datatype can never point to multiple variables

    reference datatype allows sharing the data between the functions
*/

//call by address
/*
 #include<iostream>
 using namespace std;
 void swap(int *x,int *y)
 {
     int temp;
     temp = *x;
     *x = *y;
     *y = temp;
 }
 int main()
 {
     int a = 10;
     int b = 20;
     swap(&a,&b);   // prefixing & would pass the address
     cout<<"a = "<<a <<"b="<<b <<endl; 
     return 0;
 }*/
//call by reference
 #include<iostream>
 using namespace std;
 void swaps(int &x,int &y)    // int &x = a; creates references                //   ------------
 {                                                                            //     int& data-name
     int temp;
     temp = x;
     x = y;
     y = temp;
 }
 
 int main()
 {
     int a = 10;
     int b = 20;
     swaps(a,b);
     cout<<"a = "<<a <<"  "<<"b= "<<b <<endl; 
     return 0;
 }