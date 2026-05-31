#include<stdio.h>
int main(){
    int a;
    printf("Enter a no : ");
    scanf("%d",&a);

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