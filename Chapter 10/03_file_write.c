#include <stdio.h>

int main(){
    FILE *fptr;
    // fptr = fopen("abhay.txt", "w"); //use append mode to not clear file 
    fptr = fopen("abhay.txt", "a"); 
    int num = 423;
    fprintf(fptr, "%d", num);
    fclose(fptr);
    return 0;
}