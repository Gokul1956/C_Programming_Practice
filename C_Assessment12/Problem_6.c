#include<stdio.h>
#include<string.h>
int isValid(char str[]);
void add(char num1[], char num2[], char result[]);
void sub(char num1[], char num2[], char result[]);
int compare(char num1[], char num2[]);
void removeLeadingZeros(char str[]);
void multiply(char num1[], char num2[], char result[]);
void divide(char num1[], int divisor);


int main()
{
    char expr[120];
    char result[52];

    while(1)
    {
        printf("Calc> ");
        fgets(expr,sizeof(expr),stdin);

        expr[strcspn(expr,"\n")] = '\0';

        if(strcmp(expr,"Exit") == 0)
        {
            break;
        }

        int pos = -1;
        char op;

        for(int i=0; expr[i] != '\0'; i++)
        {
            if(expr[i] == '+' ||
               expr[i] == '-' ||
               expr[i] == '*' ||
               expr[i] == '/')
            {
                op = expr[i];
                pos = i;
                break;
            }
        }

        if(pos == -1)
        {
            printf("Invalid Expression\n");
            continue;
        }

        char num1[60];
        char num2[60];

        int i;

        for(i=0; i<pos; i++)
        {
            num1[i] = expr[i];
        }
        num1[i] = '\0';

        int j = 0;

        for(i=pos+1; expr[i] != '\0'; i++)
        {
            num2[j] = expr[i];
            j++;
        }
        num2[j] = '\0';

        removeLeadingZeros(num1);
        removeLeadingZeros(num2);
        
        if(isValid(num1) == 0 || isValid(num2) == 0)
        {
            printf("Invalid Input\n");
            continue;
        }

        printf("Number1 = %s\n",num1);
        printf("Operator = %c\n",op);
        printf("Number2 = %s\n",num2);


        if(op == '+')
        {
            add(num1,num2,result);
            printf("%s\n",result);
        }
        else if(op == '-')
        {
            int cmp = compare(num1,num2);

            if(cmp == 0)
            {
                printf("0\n");
            }
            else if(cmp > 0)
            {
                sub(num1,num2,result);
                printf("%s\n",result);
            }
            else
            {
                sub(num2,num1,result);
                printf("-%s\n",result);
            }
        }
        else if(op == '*')
        {
            multiply(num1,num2,result);
            printf("%s\n",result);
        }
        else if(op == '/')
        {
            int divisor = 0;

            for(int i = 0; num2[i] != '\0'; i++)
            {
                divisor =
                    divisor * 10 +
                    (num2[i] - '0');
            }

            if(divisor == 0)
            {
                printf("Division by Zero Not Allowed\n");
                continue;
            }

            divide(num1, divisor);
        }
}  
    return 0;
}
int isValid(char str[])
{
    int i = 0;

    while(str[i] != '\0')
    {
        if(str[i] < '0' || str[i] > '9')
        {
            return 0;
        }

        i++;
    }

    return 1;
}
void add(char num1[], char num2[], char result[])
{
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

        if(i >= 0)
        {
            d1 = num1[i] - '0';
        }

        if(j >= 0)
        {
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

    for(int start = 0, end = k - 1;
        start < end;
        start++, end--)
    {
        char temp = result[start];
        result[start] = result[end];
        result[end] = temp;
    }
}
void sub(char num1[], char num2[], char result[])
{
    int len1 = strlen(num1);
    int len2 = strlen(num2);

    int i = len1 - 1;
    int j = len2 - 1;
    int k = 0;

    int borrow = 0;

    while(i >= 0 || j >= 0)
    {
        int d1 = 0;
        int d2 = 0;

        if(i >= 0)
        {
            d1 = num1[i] - '0';
        }

        if(j >= 0)
        {
            d2 = num2[j] - '0';
        }

        int diff = d1 - d2 - borrow;

        if(diff < 0)
        {
            diff += 10;
            borrow = 1;
        }
        else
        {
            borrow = 0;
        }

        result[k] = diff + '0';

        k++;
        i--;
        j--;
    }

    result[k] = '\0';
    while(k > 1 && result[k-1] == '0')
    {
        result[k-1] = '\0';
        k--;
    }

    for(int start = 0, end = k - 1;start < end;start++, end--)
    {
        char temp = result[start];
        result[start] = result[end];
        result[end] = temp;
       
    }
}
int compare(char num1[], char num2[])
{
    int len1 = strlen(num1);
    int len2 = strlen(num2);

    if(len1 > len2)
        return 1;

    if(len1 < len2)
        return -1;

    for(int i = 0; i < len1; i++)
    {
        if(num1[i] > num2[i])
            return 1;

        if(num1[i] < num2[i])
            return -1;
    }

    return 0;
}
void removeLeadingZeros(char str[])
{
    int i = 0;

    while(str[i] == '0' && str[i+1] != '\0')
    {
        i++;
    }

    if(i > 0)
    {
        int j = 0;

        while(str[i] != '\0')
        {
            str[j++] = str[i++];
        }

        str[j] = '\0';
    }
}
void multiply(char num1[], char num2[], char result[]){
    int len1 = strlen(num1);
    int len2 = strlen(num2);
    int arr[102]={0};
    for(int i = len1-1; i >= 0; i--)
    {
        for(int j = len2-1; j >= 0; j--)
        {
            int d1 = num1[i] - '0';
            int d2 = num2[j] - '0';

            int product = d1 * d2;

            arr[i + j + 1] += product;
            
        }
    }
    for(int i = len1 + len2-1 ; i > 0 ; i--)
    {
        arr[i-1] += arr[i] / 10;
        arr[i] = arr[i] % 10;
    }
    int start = 0;

    while(start < len1 + len2 - 1 && arr[start] == 0)
    {
        start++;
    }
    int k = 0;

    for(int i = start; i < len1 + len2; i++)
    {
        result[k] = arr[i] + '0';
        k++;
    }

    result[k] = '\0';
}
void divide(char num1[], int divisor){
    int divisor;
    int remainder = 0;

    char quotient[60];
    int k = 0;
    for(int i=0; num1[i]!='\0'; i++)
    {
        int current =remainder * 10 +(num1[i] - '0');

        quotient[k++] =(current / divisor) + '0';

        remainder =current % divisor;
    }
    quotient[k] = '\0';
    removeLeadingZeros(quotient);
    printf("Quotient = %s\n", quotient);
    printf("Remainder = %d\n", remainder);
}
