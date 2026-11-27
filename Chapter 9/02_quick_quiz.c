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
    struct employee e1, e2, e3;
    printf("Enter value of e1code: \n");
    scanf("%d", &e1.code);

    printf("Enter value of e1salary: \n");
    scanf("%f", &e1.salary);

    printf("Enter Name of e1employee: \n");
    scanf("%s", &e1.name);


    printf("Enter value of e2code: \n");
    scanf("%d", &e2.code);

    printf("Enter value of e2salary: \n");
    scanf("%f", &e2.salary);

    printf("Enter Name of e2employee: \n");
    scanf("%s", &e2.name);


    printf("Enter value of e3code: \n");
    scanf("%d", &e3.code);

    printf("Enter value of e3salary: \n");
    scanf("%f", &e3.salary);

    printf("Enter Name of e3employee: \n");
    scanf("%s", &e3.name);

    printf("---> %d %f %s \n", e1.code, e1.salary, e1.name);
    printf("---> %d %f %s \n", e2.code, e2.salary, e2.name);
    printf("---> %d %f %s \n", e3.code, e3.salary, e3.name);

    return 0;
}