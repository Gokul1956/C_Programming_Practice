#include<stdio.h>
int main(){
    int a;
    printf("Enter a 4 digit no : ");
    scanf("%d",&a);
    a=(a/10)%100;
    int i=2;
    while (i<a)
    {
        if(a%i ==0){
            printf("Non Prime");
            return 0;
        }
        i++;        
    }
    printf("Prime");
    
}