#include<stdio.h>

int main()
{
    char str[100];
    int count = 1;

    printf("Enter string: ");

    gets(str);

    int i = 0;

    while(str[i] != '\0')
    {
        if(str[i] == ' ')
        {
            count++;
        }

        i++;
    }

    printf("Words = %d", count);

    return 0;
}