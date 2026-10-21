#include <stdio.h>

int main()
{
    // pointer arrithmatic using integer pointer
    int a = 5;
    int* ptr = &a;
    printf("the address of a is %u\n", &a);
    printf("the adress of a is %u\n", ptr);
    ptr++;
    printf("the value of ptr is %u\n", ptr);

    // pointer arrithmatic using character pointer
    char a1 = 'A';
    char* ptr1 = &a1;
    printf("the address of a is %u\n", &a1);
    printf("the address of a is %u\n", ptr1);
    ptr1++;
    printf("the value of a is %u\n", ptr1);

    return 0;
}
