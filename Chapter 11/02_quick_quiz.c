#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n = 5;
    float *ptr;
    ptr = (float *)malloc(n * sizeof(float));
    // float arr[n]; //not allowed in c
    ptr[0] = 3.34;
    ptr[1] = 16.64;
    ptr[2] = 6.67;
    ptr[3] = 56.609;
    ptr[4] = 66.4563;

    printf("%.2f\n", ptr[0]);
    printf("%.2f\n", ptr[1]);
    printf("%.2f\n", ptr[2]);
    printf("%.2f\n", ptr[3]);
    printf("%.2f\n", ptr[4]);
    return 0;
}