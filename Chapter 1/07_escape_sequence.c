#include <stdio.h>

int main(void)
{
    int a;
    char ch = 'a';
    ch = 'c';  // Valid character literal
    ch = '\n'; // Valid escape sequence for new line
    ch = '\t'; // Valid escape sequence for tab

    printf("hey i am good \n nice");
    return 0;
}