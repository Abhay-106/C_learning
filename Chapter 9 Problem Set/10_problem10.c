#include <stdio.h>

typedef struct date
{
    int mm;
    int dd;
    int yyyy;
}Dt;

int compare(Dt d1, Dt d2)
{
    if ((d1.yyyy == d2.yyyy), (d1.mm == d2.mm), (d1.dd == d2.dd))
    {
        return 0;
    }
    if (d1.yyyy > d2.yyyy)
    {
        return 1;
    }
    else if (d1.yyyy < d2.yyyy)
    {
        return -1;
    }
    else if (d1.mm > d2.mm)
    {
        return 1;
    }
    else if (d1.mm < d2.mm)
    {
        return -1;
    }
    else if (d1.dd > d2.dd)
    {
        return 1;
    }
    else if (d1.dd < d2.dd)
    {
        return -1;
    }
}

int main()
{
    Dt d1 = {12, 6, 2004};
    Dt d2 = {12, 2, 2012};
    printf("%d\n", compare(d1, d2));

    return 0;
}