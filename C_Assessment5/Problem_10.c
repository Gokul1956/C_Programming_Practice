#include <stdio.h>
int main()
{     
    int sum =0;
    for(int i= 10;i<100;i++)
    {
        if(i%2 !=0)
        {
            int ten = i/10;
            if(ten == 7)
            {
                sum+=i;                        
            }   
        }     
    }
    printf("%d\n",sum);
}