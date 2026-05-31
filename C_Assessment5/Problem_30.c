#include<stdio.h>
int main(){
    int a, b,c,hcf,min;

    printf ("enter  no1 : ");
    scanf("%d",&a);
    printf("enter  no2 :");
    scanf("%d",&b);
    if(a>b){
        min=b;
    }else{
        min =a;
    }
    
   hcf=1;
   for(int i=1;i<=min;i++){
    if (a%i == 0 && b%i ==0)
    {
        hcf=i;
    }
    
   }
   printf("HCF : %d",hcf);
   
}