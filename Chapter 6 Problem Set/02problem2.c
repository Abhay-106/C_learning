#include <stdio.h>


int returning_5(int* ptr){
    printf("the value of ptr is %d\n", ptr);
    printf("the value at ptr is %d\n", *ptr);
    return 5;
}
int main()
{
    int i = 2;
    int *ptr = &i;
    printf("the adress of i is %u\n", &i);
    returning_5(ptr);
    return 0;
}