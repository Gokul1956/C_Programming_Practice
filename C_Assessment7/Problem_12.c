#include <stdio.h>
void disp_sum_all_digits(int x);
int main(){
    int a;  
    
    printf("enter a no : ");
    scanf("%d",&a);
    disp_sum_all_digits(a);

}
void disp_sum_all_digits(int x){
    
    int sum =0;
    while(x!=0)
    {
       sum+=x%10;
       x=x/10;
    }
    printf("output : %d",sum);
    
}