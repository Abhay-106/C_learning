#include <stdio.h>

struct employee
{
    int code; // this declares new user definerd data
    float salary;
    char name[10];
}; // semicolon

int main()
{
    struct employee e1;
    e1.code = 45;
    struct employee *ptr;
    ptr = &e1;
    // now we can print structure elements using:
    printf("%d\n", (*ptr).code);
    printf("%d\n", ptr->code); //exactly same as printf("%d\n", (*ptr).code); 

    return 0;
}