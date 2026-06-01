#include<stdio.h>
int main(){
    int a, b,c,lcm;

    printf ("enter  no1 : ");
    scanf("%d",&a);
    printf("enter  no2 :");
    scanf("%d",&b);
    printf("enter no3 : ");
    scanf("%d",&c);
    lcm =a;
    if(lcm<b){
        lcm =b;
    }
    if(lcm<c){
        lcm =c;
    }
   while (1)
   {
        if (lcm%a ==0 && lcm%b ==0 && lcm%c ==0){
            printf("Lcm: %d",lcm);
            break;
        }
    lcm++;
   }
   
}