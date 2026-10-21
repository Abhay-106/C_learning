#include <stdio.h>

void printarray(int a[], int n);
void reverse(int arr[], int n);
void printarray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d", a[i]);
    }
    printf("\n");
}
void reverse(int arr[], int n)
{
    int temp;
    for (int i = 0; i < n / 2; i++)
    {
        /*for i 0 to n/2
        arr[i] arr[n-i-1]*/
        temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
}
int main()
{
    int arr[100];

    for (int i = 0; i < 100; i++)
    {
        arr[i] = i + 1;
    }
    printarray(arr, 100);
    reverse(arr, 100);
    printarray(arr, 100);
    return 0;
}