//in this program we will learn about cout and cin
/* cout is predefined object, which works with both formatted and unformatted output
cout refers to console - output
it is the object of ostream class
header file- <ostream.h>
cout<< expression -> insertion operator (<< overloaded leftshift operator)    // learn about shifting operators in c
*/

/* cin is predefined object, which works with both formatted and unformatted input
cin refers to console - input
It is the object of istream class
header file- <istream.h>
cin >> expression -> extraction operator (>> overloaded rightshift operator)
cin >> a >> b; cascading , you can read multiple variables in single line
*/
#include<iostream>
int main()
{
    int a = 10;
    float f;
    std::cout<< "Hello"<< std::endl << a << std::endl;
    std::cin>>f;
    std::cout<<f<<std::endl;
    return 0;
}
// bitwise operators
/* bitwise logical operatorws ->  & , | ,  ~ , ^ (bitwise and , bitwise or , bitwise not and bitwise xor)
    difference between bitwise logical operator and logical operators are demonstrated below
    char a = 3 , b = 12;
    if(a&b) printf("The result is 1\n");        
    if(a&&b) printf("The result is 1\n");       ->this will be output. Because the logical operator treats both number as 1(i.e.greater than 0)

    left shift operator
    5 << 1 means left shift by one place   
    5 = (0101) after left shifting the output will be (5 * 2^ (number of digits shifted left))
    (5<<1) = 10

    right shift operator
    5>>1 means right shift by one place
    5>>1 = (5 divided by 2^(number of digits shifted right))
    (5>>1) = (5 / (2^1)) = 2

    bitwise xor operation                   works fine
    actually swaps two numbers
    a = 4, b = 3;
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    result:
        a = 3 and b = 4;
*/


