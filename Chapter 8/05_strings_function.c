#include <stdio.h>
#include <string.h>

// int main()
// {
//     char st[] = "Abhay";
//     printf("%d", strlen(st));            // strlen function calculates how manny charcters excluding null character

//     return 0;
// }

// int main (){
//     char st[] = "Abhay";
//     char target[30];
//     strcpy(target, st);                   //strcpy function //target now contains "Abhay" 
//     printf("%s %s", target , st);

//     return 0;
// }

// int main(){
//     char a1[56] = "Abhay";
//     char a2[56] = " bhau";

//     printf("%s", strcat(a1, a2));            //STRCAT FUNCTION //a1 now contains abhay bhau 

//     return 0;

// }

int main()
{
    int a = strcmp("far", "joke");
    printf("%d", a);                             //strcmp function //function used to compare two string ascii

    return 0;
}