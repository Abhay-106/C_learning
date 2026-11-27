#include <stdio.h>
#include <string.h>



struct employee
{
    int code; // this declares new user definerd data
    float salary;
    char name[10];
}; // semicolon 

void show(struct employee e); //function prototype 


void show(struct employee e){
    printf("Code is %d\nSalary is %f\nName is %s\n", e.code , e.salary, e.name);
}


int main(){
    struct employee e1;
    e1.code = 4511;
    strcpy(e1.name, "Abhay");
    e1.salary = 56.3452;
    show (e1);

    return 0;
}