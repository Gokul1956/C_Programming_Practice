#include <stdio.h>
int main()
{   
    int a;  
    
    printf("enter a no : ");
    scanf("%d",&a);
    a=a%100;
    
    for(int i =2;i<a;i++){
        if(a%i == 0){
            printf("Non Prime");
            return 0;
        }
    }
    printf("Prime");

    
}