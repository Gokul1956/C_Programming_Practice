#include <stdio.h>
void disp_reverse_number(int x);
int main(){
    int a;  
    
    printf("enter a no : ");
    scanf("%d",&a);
    disp_reverse_number(a);

}
void disp_reverse_number(int x){
    
    int reverse =0;
    while(x!=0)
    {
       reverse = reverse*10 + x%10;
       x=x/10;
    }
    printf("output : %d",reverse); 
    
}