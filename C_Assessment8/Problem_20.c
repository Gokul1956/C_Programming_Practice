#include<stdio.h>
int disp_count_HCF2(int a,int b);
int main(){
    int x,y;
    printf("enter a no :");
    scanf("%d",&x);
    
    printf("enter  no2 :");
    scanf("%d",&y);

    printf("%d",disp_count_HCF2(x,y));
}
int disp_count_HCF2(int a,int b){
    int min,hcf;
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
   return hcf;
   
}