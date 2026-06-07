#include<stdio.h>

void memcopy(int src[], int dst[], int size)
{
    for(int i = 0; i < size; i++)
    {
        dst[i] = src[i];
    }
}

int main()
{
    int src[] = {10,20,30,40,50};
    int size = 5;

    int dst[5];

    memcopy(src, dst, size);

    printf("Destination Array:\n");

    for(int i = 0; i < size; i++)
    {
        printf("%d ", dst[i]);
    }

    return 0;
}