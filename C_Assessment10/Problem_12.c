#include<stdio.h>

int main()
{
    int arr[50];
    char str[51];
    int n;

    printf("Enter no of digits: ");
    scanf("%d",&n);

    printf("Enter digits:\n");

    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<n;i++)
    {
        str[i] = arr[i] + '0';
    }

    str[n] = '\0';

    printf("%s",str);

}