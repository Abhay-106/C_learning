#include <stdio.h>

int main()
{
    int cgpa[3] = {3, 8, 8};
    for (int i = 0; i < 3; i++)
    {
        printf("The arrays at index %d is %d\n", i, cgpa[i]);
    }
    return 0;
}