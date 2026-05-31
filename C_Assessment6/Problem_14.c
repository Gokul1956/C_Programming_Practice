#include<stdio.h>
int main(){
    int a;
    int i=1;
    int count =0;
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
    int first = a/pow;
    int mid = (a%pow)/10;
    int final = (last*pow)+(mid*10)+first;
    printf("%d",final);
}