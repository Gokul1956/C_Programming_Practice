#include<stdio.h>

int main()
{
    char str[51];
    int arr[50];

    printf("Enter a number: ");
    scanf("%s", str);

    int i = 0;

    while(str[i] != '\0')
    {
        arr[i] = str[i] - '0';
        i++;
    }

    printf("integer array:\n");

    for(int j = 0; j < i; j++)
    {
        printf("%d ", arr[j]);
    }


}