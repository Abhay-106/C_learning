#include <stdio.h>

typedef struct c
{
    int real;
    int imaginary;
} complex;

int main()
{
    complex c = {1, 4};
    printf("The value of complex numebr  is %d + %di", c.real, c.imaginary);

    return 0;
}