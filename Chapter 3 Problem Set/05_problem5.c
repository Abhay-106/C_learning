#include <stdio.h>

int main()
{
    char ch;
    printf("Enter character: \n");
    scanf("%c", &ch);
    if (ch >= 97 && ch <= 122)
    {
        printf("The character is a lowercase letter\n");
    }
    else
    {
        printf("character is not a lowercase letter\n");
    }

    return 0;
}