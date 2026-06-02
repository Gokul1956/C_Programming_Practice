#include <stdio.h>
void count_total_digits(int x);
int main(){
    int a;  
    
    printf("enter a no : ");
    scanf("%d",&a);
    count_total_digits(a);

}
void count_total_digits(int x){
    
    int digits =0;
    while(x!=0)
    {
        x=x/10;
        digits++;
    }
    printf("output : %d",digits);
    
}