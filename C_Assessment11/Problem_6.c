#include<stdio.h>

void strcopy(char src[], char dst[])
{
    int i = 0;

    while(src[i] != '\0')
    {
        dst[i] = src[i];
        i++;
    }

    dst[i] = '\0';
}

int main()
{
    char src[50];
    char dst[50];

    printf("Enter string: ");
    scanf("%s", src);

    strcopy(src, dst);

    printf("Copied String: %s", dst);

}