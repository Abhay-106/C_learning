#include <stdio.h>

int main()
{
    char ch;
    FILE *ptr1;
    FILE *ptr2;

    ptr1 = fopen("abhay.txt", "r");
    ptr2 = fopen("abhay2.txt", "w");
    while (1)
    {

        ch = fgetc(ptr1);
        if (ch == EOF)
        {
            break;
        }
        else
        {
            fprintf(ptr2, "%c", ch);
            fprintf(ptr2, "%c", ch);
            printf("%c", ch);
        }
    }

    return 0;
}