#include <stdio.h>

int* s(int a, int b);
int* s(int a, int b){
    int s = a + b;
    int*  ptr = &s;
    printf(" The sum is %d\n ", s);
    return ptr;
}
float* avg(int a, int b);
float* avg(int a, int b){
    float avg = (a+b)/2.0;
    float* ptr = &avg;
    printf("The average is %.2f\n", avg);
    return ptr;
}

int main(){
    int x = 4;
    int y = 6;
    int* ptr1;
    float* ptr2;
    
    ptr1 = s(x,y);
    ptr2 = avg(x,y);
    
    printf(" The adress of sum is %u and of average is %u\n", ptr1, ptr2);
    
    return 0;
}