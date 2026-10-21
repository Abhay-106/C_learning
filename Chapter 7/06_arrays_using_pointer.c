#include <stdio.h>

int main()
{
    int marks[] = {12, 34, 53, 66};

    int *ptr = &marks[0];
    // int* ptr = marks; //same as int* ptr = &marks[0]; (c syntax)

    // printf("the adress of a is %u", &a);

    for (int i = 0; i < 4; i++)
    {
        // printf("the amrks at index %d is %d\n", i, marks[i]);
        printf("the marks at index %d is %d\n", i, *ptr);
        ptr++;
    }

    return 0;
}