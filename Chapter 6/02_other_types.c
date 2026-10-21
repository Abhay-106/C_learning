#include <stdio.h>

int main()
{
    char i = 'A';
    char *j = &i; // j is pointer pointing to i (j is charaacter pointer)
    float k = 5.232;
    float *k1 = &k;
    printf("The adress of i is %p\n", &i);
    printf("the adress of i is %p\n", j);
    printf("the adress of k is %p\n", &k);

    printf("the value at adress k is %.2f\n", *(&k));
    printf("the value at adress i is %c\n", *(&i));
    return 0;
}