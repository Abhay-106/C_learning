#include <stdio.h>

int main(){
    char ch;
    FILE *ptr;
    ptr = fopen("abhay.txt", "r");
    while (1){
        ch = fgetc(ptr); //while on the content of a file is break 
        printf("%c", ch);
        
        if(ch == EOF)
        {
            break;
        }
    }
    return 0;
}