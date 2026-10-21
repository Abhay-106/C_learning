#include <stdio.h>

int factorial(int);

// faactorial of 0 is 1
// factorial 5 is 5*4*3*2*1 = 120
// factorial 4 is 4*3*2*1 = 24
// factorial n is 1 X 2 X 3 X 4 X 5 X ... X n
// factorial (n-1) is 1 X 2 X 3 X 4 X 5 X ... X n-1
int factorial(int n)
{
    if (n == 1 || n == 0) //base condition
    {
        return 1;
    }
    // factorial (n)= factorial (n-1)Xn
    return factorial(n - 1) * n;
}
int main()
{
    int a = 6;
    printf("The factorial of %d is %d", a, factorial(a));
    return 0;
}
