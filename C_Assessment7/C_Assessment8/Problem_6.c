#include<stdio.h>
int disp_sum_all_digits(int a); 
int main(){
    int x;
    printf("Enter a no : ");
    scanf("%d",&x);
    printf("%d",disp_sum_all_digits(x));
}
int disp_sum_all_digits(int a){
    int sum=0;
    while (a!=0)
    {
        sum+=a%10;
        a=a/10;
    }
    return sum;    
}