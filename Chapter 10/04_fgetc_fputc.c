#include <stdio.h>

int main(){
    FILE *ptr;
    ptr = fopen("abhay.txt", "r");
    char c = fgetc(ptr);
    printf("%c", c);
    // putc('c', ptr);
    return 0;
}