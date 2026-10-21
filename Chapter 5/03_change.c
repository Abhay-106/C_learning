#include <stdio.h>

int change(int a);

int change(int a)
{
    a = 7;
    return 0;
}

int main()
{
    int b = 22;
    change(b);
    printf("b is %d\n", b);
    return 0;
}