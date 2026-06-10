#include<stdio.h>
#include<string.h>

void getnumbers(char num1[], char num2[]);
void multiplynumbers(char num1[], char num2[], int result[]);
void printresult(int result[], int size);

int main()
{
    char num1[51];
    char num2[51];
    int result[101] = {0};

    getnumbers(num1, num2);
    multiplynumbers(num1, num2, result);

    printresult(result, 101);

    return 0;
}

void getnumbers(char num1[], char num2[])
{
    printf("Enter first number : ");
    scanf("%50s", num1);

    printf("Enter second number : ");
    scanf("%50s", num2);
}

void multiplynumbers(char num1[], char num2[], int result[])
{
    int len1 = strlen(num1);
    int len2 = strlen(num2);

    for(int i=len1-1;i>=0;i--)
    {
        for(int j=len2-1;j>=0;j--)
        {
            int mul =
                (num1[i]-'0') *
                (num2[j]-'0');

            result[i+j+1] += mul;
        }
    }

    for(int i=len1+len2-1;i>0;i--)
    {
        result[i-1] += result[i]/10;
        result[i] %= 10;
    }
}

void printresult(int result[], int size)
{
    int i = 0;

    while(i < size-1 && result[i] == 0)
    {
        i++;
    }

    for(; i<size; i++)
    {
        printf("%d", result[i]);
    }

    printf("\n");
}