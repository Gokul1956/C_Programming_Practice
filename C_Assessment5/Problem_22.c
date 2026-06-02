#include <stdio.h>
int main()
{   
    int a;
    int count =0;  
    
    printf("enter a no : ");
    scanf("%d",&a);
    
    while (a>=10)
    {
        int check = a%100;
        if(check%2 != 0){
            count++;
        }
        a=a/10;
    }
    
    printf("%d",count);  
    
    
}
