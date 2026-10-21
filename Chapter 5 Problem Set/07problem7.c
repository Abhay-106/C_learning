#include <stdio.h>

int main()
{
    int n = 3;
    for (int i = 0; i < n; i++)
    {
        // this loop runs from 0 to 2
        // if i= 0 ----> print 1 staR
        // if i= 1 ----> print 3 staR
        // if i= 2 ----> print 5 staR
        // no_of_star = (2*i+1)

        // this loop prints (2*i + 1)stars
        for (int j = 0; j < (2 * i + 1); j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}