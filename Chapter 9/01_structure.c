#include <stdio.h>
#include <string.h>

struct employee
{
    int code; // this declares new user definerd data
    float salary;
    char name[10];
}; // semicolon is imp

int main()
{
    struct employee e1, e2;
    e1.code = 45;
    strcpy(e1.name, "Abhay");
    e1.salary = 54.55;

    printf("%d\n%f\n%s\n", e1.code, e1.salary, e1.name);

    return 0;
}