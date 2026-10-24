#include <stdio.h>

int main()
{

    FILE *ptr;
    ptr = fopen("abhay2.txt", "r");
    if (ptr == NULL)
    {
        printf("The file does not exist \n");
    }
    else
    {
        int num;
        fscanf(ptr, "%d", &num);
        printf("the value of num is %d\n", num);
        fscanf(ptr, "%d", &num);
        printf("the value of num is %d\n", num);
    }

    return 0;
}