#include<stdio.h>

void increment(int arr[], int size)
{
    for(int i = 0; i < size; i++)
    {
        arr[i]++;
    }
}

int main()
{
    int arr[] = {1,2,3,4,5};
    int size = 5;

    increment(arr, size);

    for(int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

   
}