#include<stdio.h>

void strcon(char src1[], char src2[], char dst[])
{
    int i = 0;
    int j = 0;

    while(src1[i] != '\0')
    {
        dst[j] = src1[i];
        i++;
        j++;
    }

    i = 0;

    while(src2[i] != '\0')
    {
        dst[j] = src2[i];
        i++;
        j++;
    }

    dst[j] = '\0';
}

int main()
{
    char src1[50];
    char src2[50];
    char dst[100];

    printf("Enter first string: ");
    scanf("%s", src1);

    printf("Enter second string: ");
    scanf("%s", src2);

    strcon(src1, src2, dst);

    printf("%s", dst);

    return 0;
}