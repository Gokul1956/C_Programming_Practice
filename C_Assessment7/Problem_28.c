#include<stdio.h>
void disp_LCM2(int a,int b);
int main(){
    int x,y;
    printf("enter a no :");
    scanf("%d",&x);
    
    printf("enter  no2 :");
    scanf("%d",&y);

    disp_LCM2(x,y);
}
void disp_LCM2(int a,int b){
    int lcm;
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