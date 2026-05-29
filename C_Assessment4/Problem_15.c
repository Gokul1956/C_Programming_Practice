#include<stdio.h>
int main(){
    int a,digit,temp,y;
    y = 1;
    digit=0;
    printf("Enter a No : ");
    scanf("%d",&a);
    int LSB=a%10;
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
    
    int MSB = a/y;
    
    if (MSB%2 !=0){
        MSB = MSB-1;
        a=a%y;
        int final =(MSB*y)+a;
        printf("Output : %d",final);
    }
    else{
        printf("Output : %d",a);
    }
   
 
    
    
}