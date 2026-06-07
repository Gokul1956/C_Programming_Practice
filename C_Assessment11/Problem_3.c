#include<stdio.h>

void arrange_ascend(int arr[], int size)
{
    for(int i = 0; i < size; i++)
    {
        arr[i] = i + 1;
    }
}

int main()
{
    int arr[5];

    arrange_ascend(arr, 5);

    for(int i = 0; i < 5; i++)
    {
        printf("%d\n", arr[i]);
    }
}