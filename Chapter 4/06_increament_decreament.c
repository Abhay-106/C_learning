#include <stdio.h>

int main()
{
    int i = 5;
    printf("the value of i is %d\n", i);
    i = i + 5;
    printf("the value of i is %d\n", i);
    //++i;
    printf("the value of i is %d\n", i++);
    printf("the value of i is %d\n", i);
    i += 2; // i = i + 2
    printf("the value of i is %d\n", i);
    // i++ first prints i then increaments (post increament)
    //++i first increaments then prints i (pre increament)
    return 0;
}