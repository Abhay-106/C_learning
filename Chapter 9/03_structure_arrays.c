#include <stdio.h>

struct employee
{
    int code; // this declares new user definerd data
    float salary;
    char name[10];
}; // semicolon

int main()
{
    struct employee facebook[100];
    facebook[0].code;
    facebook[1].code;

    struct employee Abhay = {100, 72.22, "Abhay"};
    printf("---> %d %f %s\n", Abhay.code, Abhay.salary, Abhay.name);

    return 0;
}