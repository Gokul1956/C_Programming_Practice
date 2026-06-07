#include<stdio.h>

void find_2digit_odd_sum7()
{
    for(int i = 10; i <= 99; i++)
    {
        int ten = i / 10;
        int one = i % 10;

        if((ten + one == 7) && (i % 2 != 0))
        {
            printf("%d ", i);
        }
    }
}

int main()
{
    find_2digit_odd_sum7();
}