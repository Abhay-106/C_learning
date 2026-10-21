// write program to point adress of variable , use this adress to get value of variable
#include <stdio.h>

int main()
{
    int i = 2;
    int *ptr = &i;
    printf("the adress of i is %u\n", &i);
    printf("the value of i is %d", *ptr);
    return 0;
}