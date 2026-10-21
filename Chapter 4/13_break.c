#include <stdio.h>

int main()
{
    for (int i = 0; i < 15; i++)
    {
        if (i == 8)
        {
            // break; // exit the code now!
            continue; // skip the current iteration and continue with the next iteration
        }
        printf("i is %d\n", i);
    }
    printf("for loop is done!");
    return 0;
}