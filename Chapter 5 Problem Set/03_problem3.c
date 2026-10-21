#include <stdio.h>

float force(float);

float force(float mass)
{
    return mass * 9.8;
}
int main()
{
    int m = 54;
    printf("The value of force is is %.2f\n", force(m));
    return 0;
}