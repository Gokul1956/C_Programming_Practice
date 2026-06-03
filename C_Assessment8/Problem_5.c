#include<stdio.h>
int count_total_digits(int a); 
int main(){
    int x;
    printf("Enter a no : ");
    scanf("%d",&x);
    printf("%d",count_total_digits(x));
}
int count_total_digits(int a){
    int count=0;
    while (a!=0)
    {
        a=a/10;
        count++;
    }
    return count;    
}