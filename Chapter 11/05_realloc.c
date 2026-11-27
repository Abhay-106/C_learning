#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 5;
    int *ptr;
    scanf("%d", &n);
    ptr = (int *)malloc(n * sizeof(int));
    // int arr[n]; //not allowed in c
    ptr[0] = 3;
    printf("%d", ptr[0]);

    ptr2 = (int *)calloc(n * sizeof(int));
    return 0;
}