#include <stdio.h>
// 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, and so on
// fibonacci(n) = fibonacci(n-1) + fibonacci(n-2);

int fibonacci(int);

int fibonacci(int n)
{
    if (n == 1 || n == 2)
    {
        return n - 1;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    int n = 4;
    printf("enter value of fibbunacci : ");
    scanf("%d", &n);
    printf("the value of fibonacci serise is %d is %d", n, fibonacci(n));
    return 0;
}