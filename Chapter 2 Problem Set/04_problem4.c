#include <stdio.h>

int main()
{
    // explain step by step of 3*x/y-z+k
    // where  ,x = 2 ,y = 3 ,z = 3 ,k = 1
    int x = 2, y = 3, z = 3, k = 1;
    int e = 3 * x / y - z + k;
    // 3*2/3-y-z+1
    // 6/3-3+1
    // 2-3+1
    // 0
    printf("the value of e is %d", e);

    return 0;
}