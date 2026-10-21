#include <stdio.h>

int main()
{
    int i = 10; // declare and initialize i with 10
    int j = i;  // declare and initialize j with i
    int a = 2, b = 3, c = 4, d = 5;
    //%d is called as formate specifier
    //%d is for int, %f is for float, %c is for char
    printf("the value of i is %d\n and value of j is %d\n", i, j);
    printf("the value of a is %d\n and value of b is %d\n", a, b);
    printf("the value of c is %d\n and value of d is %d\n", c, d);
    return 0;
}