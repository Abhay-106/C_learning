#include <stdio.h>
#include <string.h>

int main()
{
    char c = 'a';
    int contains = 0;
    char str[] = "Abhay";
    for (int i = 0; i < strlen(str); i++)
    {
        if(str[i] == c){
            contains = 2;
            break;
        }
    }
    if(contains){
        printf("Yes it contains\n");
        
    }
    else{
        printf("does not contains\n");
        
    }
    printf("%d", contains);

    return 0;
}