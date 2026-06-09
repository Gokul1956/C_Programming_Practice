#include<stdio.h>

int main()
{
    char str[100];
    char sub[50];

    printf("Enter main string: ");
    scanf("%s", str);

    printf("Enter substring: ");
    scanf("%s", sub);

    int i, j;

    for(i = 0; str[i] != '\0'; i++)
    {
        for(j = 0; sub[j] != '\0'; j++)
        {
            if(str[i+j] != sub[j])
            {
                break;
            }
        }

        if(sub[j] == '\0')
        {
            printf("%d", i + 1);
            return 0;
        }
    }

    printf("Not Found");

    return 0;
}