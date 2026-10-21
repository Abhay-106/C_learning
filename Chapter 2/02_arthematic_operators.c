#include <stdio.h>

int main()
{
    int a = 6;
    int b = 3;
    int c = a + b;
    printf("the value of a is %d\n and value of b is %d\n and sum is %d\n", a, b, c);
    // modulus operator is used to get the reminder of the division
    printf("the reminder when is a is devided by b is: %d\n", a % b);

    //this does not work for exponential in c 
    //int d = a ^ b;
    return 0;
}