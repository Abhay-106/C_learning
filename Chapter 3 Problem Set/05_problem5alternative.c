#include <stdio.h>

int main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    printf("The character is %d", ch);
    printf("the value of character is %d\n", ch);
    // 97 122
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