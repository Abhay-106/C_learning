#include <stdio.h>

float c2f(float);
float c2f(float c)
{
    return ((9 * c) / 5) + 32;
}

int main()
{
    float c;
    printf("Enter Celcius: ");
    scanf("%f", &c);
    printf("\nCelsius to fahrenheit for %.2f c is %.2f f", c, c2f(c));
    return 0;
}