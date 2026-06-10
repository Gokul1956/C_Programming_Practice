#include <stdio.h>

int main()
{
    char str[100];
    int count = 0;

    printf("Enter string: ");
    fgets(str, sizeof(str), stdin);

    int i = 0;

    while(str[i] != '\0')
    {
        if(str[i] != ' ' &&
           (i == 0 || str[i-1] == ' '))
        {
            count++;
        }

        i++;
    }

    printf("Words = %d", count);

    return 0;
}
