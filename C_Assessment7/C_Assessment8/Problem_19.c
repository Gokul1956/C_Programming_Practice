#include<stdio.h>
int disp_LCM3(int a,int b,int c);
int main(){
    int x,y,z;
    printf("enter a no :");
    scanf("%d",&x);
    
    printf("enter  no2 :");
    scanf("%d",&y);

    printf("enter  no3 :");
    scanf("%d",&z);

    printf("%d",disp_LCM3(x,y,z));
}
int disp_LCM3(int a,int b,int c){
    int  lcm =a;
    if(lcm<b){
        lcm =b;
    }
    if(lcm<c){
        lcm =c;
    }
   while (1)
   {
        if (lcm%a ==0 && lcm%b ==0 && lcm%c ==0){
            return lcm;
            break;
        }
    lcm++;
   }
   
}