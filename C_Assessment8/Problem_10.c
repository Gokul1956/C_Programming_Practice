#include<stdio.h>
int disp_2digit_even_sum6();
int main()
{
    printf("%d", disp_2digit_even_sum6());
}

int disp_2digit_even_sum6()
{
    int count = 0;
    for(int i = 0; i <= 9; i++)
    {
        int isPrime = 1;
        if(i < 2)
            isPrime = 0;
        for(int j = 2; j < i; j++)
        {
            if(i % j == 0)
            {
                isPrime = 0;
                break;
            }
        }
        if(isPrime)
            count++;
    }
    return count;
}