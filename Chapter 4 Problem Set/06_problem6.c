#include <stdio.h>

int main()
{
    // using do while loop
    /*int i = 1;
   int sum = 0;
   do
   {
       sum += i;
       i++;
   } while (i <= 10);
   */
    // using for loop:
    int sum = 0;
    for (int i = 1; i <= 10; i++)
    {
        sum += i;
    }

    printf("The sum of first 10 natural numbers is %d\n", sum);

    return 0;
}