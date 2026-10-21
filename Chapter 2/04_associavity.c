#include <stdio.h>

int main()
{
    int a = 3;
    int b = 6;
    int c = 9;
    printf("The value of %d\n", a * b / c + 7);
    printf("The value of %d", 3 * b / 2 * c + 7 * a);
    // 3* b / 2 * c + 7 * a
    // 18/2*c + 21
    // 9*c + 21
    // 81 + 21
    // 102

    return 0;
}