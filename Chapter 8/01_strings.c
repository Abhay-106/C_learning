#include <stdio.h>

int main(){
    // char st[] = {'a', 'b', 'c', '\0'};
    char st[] = "abc"; //char st[] = {'a', 'b', 'c', '\0'}; same as doing this
    for (int i = 0; i < 3; i++)
    {
        printf("character is %c \n", st[i]);
    } 
    
    return 0;
}