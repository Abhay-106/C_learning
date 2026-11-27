#include <stdio.h>

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main(void)
{
    int *x;
    int *y;
    printf("Enter the value of x: ");
    scanf("%d", &x);
    printf("Enter the value of y: ");
    scanf("%d", &y);

    swap(&x,&y);

    printf("the value of a1 is %d\n", x);
    printf("the value of b1 is %d\n", y);

    return 0;
}