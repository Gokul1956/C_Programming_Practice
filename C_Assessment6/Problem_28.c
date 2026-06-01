#include<stdio.h>
int main(){
    int a, b,lcm;

    printf ("enter  no1 : ");
    scanf("%d",&a);
    printf("enter  no2 :");
    scanf("%d",&b);

    if(a<b){
        lcm = b;
    }else{
        lcm =a;
    }
   while (1)
   {
        if (lcm%a ==0 && lcm%b ==0){
            printf("Lcm: %d",lcm);
            break;
        }
    lcm++;
   }
   
}