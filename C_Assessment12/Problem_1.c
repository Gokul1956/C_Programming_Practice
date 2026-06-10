#include <stdio.h>
#include<string.h>

int main()
{
    char num1[51], num2[51];
    char result[52];

    scanf("%s", num1);
    scanf("%s", num2);

    int len1 = strlen(num1);
    int len2 = strlen(num2);

    int i = len1 - 1;
    int j = len2 - 1;
    int k = 0;

    int carry = 0;

    while(i >= 0 || j >= 0)
    {
        int d1 = 0;
        int d2 = 0;

        if(i >= 0){
            d1 = num1[i] - '0';
        }

        if(j >= 0){
            d2 = num2[j] - '0';
        }
        int sum = d1 + d2 + carry;

        result[k] = (sum % 10) + '0';

        carry = sum / 10;

        k++;
        i--;
        j--;
    }

    if(carry)
    {
        result[k] = carry + '0';
        k++;
    }

    result[k] = '\0';

    for(int start = 0, end = k - 1; start < end; start++, end--)
    {
        char temp = result[start];
        result[start] = result[end];
        result[end] = temp;
    }

    printf("%s", result);

    return 0;
}
