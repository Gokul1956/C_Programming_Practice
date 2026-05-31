#include<stdio.h>
int main(){
    int a;
    int count =0;
    printf("Enter a no : ");
    scanf("%d",&a);
    while (a>=10)
    {
        for(int i=1;i<10;i++){
        int digit=a%100;
        if(i*i == digit){
            count++;
        }       
        
        }
        a=a/10;
    }
    
    printf("%d",count);
}