#include <stdio.h>

int main()
{
    int n;
    char str[20];
    int count = 0;

    scanf("%d", &n);

    int temp = n;

    while(temp != 0)
    {
        count++;
        temp /= 10;
    }

    str[count] = '\0';

    for(int i = count - 1; i >= 0; i--)
    {
        str[i] = (n % 10) + '0';
        n /= 10;
    }

    printf("%s", str);

    
}