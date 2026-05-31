#include<stdio.h>
int main(){
    int a;
    int i=1;
    
    int digit =0;
    int pow=1;
    printf("Enter a no : ");
    scanf("%d",&a);

    int last=a%10;
    int temp =a;
    while(temp!=0){
        temp= temp/10;
        digit++;
    }
    
    while(i<digit){
        pow = pow*10;
        i++;
    }

    int MSB = a/pow;
    a= a%pow;
    if(MSB%2 !=0){
        MSB=MSB-1;
    }
    int final =(MSB*pow)+a;
    printf("%d",final);
}