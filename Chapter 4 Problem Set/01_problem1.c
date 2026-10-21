#include <stdio.h>
// first code written by luffy without anyones help
// there is no one proud of me i am proud of myself
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = n; i <= 10 * n; i = i + n)
    {
        printf("%d\n", i);
    }
    return 0;
}