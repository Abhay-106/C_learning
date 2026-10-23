#include <stdio.h>
#include <string.h>


typedef struct employee
{
    int code; // this declares new user definerd data
    float salary;
    char name[10];
}Emp; // semicolon 

int main(){
    // typedef int Abhay;
    // Abhay a = 88;
    // printf("the value of a is %d\n", a);

    //
    //struct employee e1;
    //type struct employee Emp;
    Emp e1;
    Emp*ptr1 = &e1; 
    e1.code = 4511;
    strcpy(e1.name, "Abhay");
    e1.salary = 54.55;
    
    printf("%d %f %s\n", e1.code , e1.salary, e1.name);
    printf("%d %f %s\n", ptr1->code , ptr1->salary, ptr1->name);
    
    
    return 0;
}