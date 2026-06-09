#include<stdio.h>

int main()
{
    char str[100];
    char ch;

    printf("Enter string: ");
    scanf("%s", str);

    printf("Enter character: ");
    scanf(" %c", &ch);

    int i = 0;

    while(str[i] != '\0')
    {
        if(str[i] == ch)
        {
            printf("%d ", i + 1);
        }
        i++;
    }

    return 0;
}