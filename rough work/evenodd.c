#include <stdio.h>

int main()
{
    int i;
    printf("Enter the integer\n");
    scanf("%d", &i);
    if (i % 2 == 0)
    {
        printf("the integer is even\n");
    }
    else
    {
        printf("the integer is odd\n");
    }

    return 0;
}