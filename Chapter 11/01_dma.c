#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n = 5;
    float *ptr;
    ptr = (float *)malloc(n * sizeof(float));
    // float arr[n]; //not allowed in c
    ptr[0] = 3;
    ptr[1] = 16;
    printf("%d", ptr[0]);
    return 0;
}