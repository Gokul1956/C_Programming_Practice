#include<stdio.h>
int main(){
    int a,digit,temp,y;
    y = 1;
    digit=0;
    printf("Enter a No : ");
    scanf("%d",&a);
    int last=a%10;
    temp=a;

    
    count : if(temp>0)
    {
        temp = temp/10;
        digit++;
        goto count;
    }
    power: if (digit>1)
    {
         y=y*10;
         digit--;
         goto power;
    }
    
    int first = a/y;
    a = (a%y)/10;
    int final = (last * y) + (a * 10) + first;
    printf("Output : %d",final);
}