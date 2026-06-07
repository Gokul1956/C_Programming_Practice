#include<stdio.h>

int main()
{
    int a;

    printf("Enter a number: ");
    scanf("%d",&a);

    printf("Before change: %d\n", a);

    int *ptr = &a;

    *ptr = *ptr + 10;

    printf("After change: %d\n",a);

}