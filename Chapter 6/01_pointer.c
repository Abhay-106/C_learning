#include <stdio.h>

int main()
{
    int i = 72;
    int *j = &i; // j is pointer pointing to i
    int k = 67;
    int *h = &k;
    printf("the adress of i is %p\n", &i);
    printf("the adress of i is %p\n", j);
    printf("the adress of i is %p\n", &k);
    printf("the adress of h is %p\n", k);
    printf("the adress of k is %p\n", &h);
    printf("the value at adress h %d\n", *(&h));
    printf("the value at adress j %d\n", *(&i));

    return 0;
}