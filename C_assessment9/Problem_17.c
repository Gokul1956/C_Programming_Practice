#include <stdio.h>

int main()
{
    int arr[5] = {4, 12, 25, 18, 9};
    int n = 5;

    for(int i = n-1; i > 0; i--)
    {
        arr[i-1] += arr[i] / 10;
        arr[i] = arr[i] % 10;
    }

    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

}