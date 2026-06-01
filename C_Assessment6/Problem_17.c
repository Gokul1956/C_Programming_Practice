#include<stdio.h>
int main(){
    int a;
    int sum =0;
    printf("Enter a no : ");
    scanf("%d",&a);

    int i=2;
    int temp =a;
    while (i<a)
    {
        while (temp != 0){
            sum +=temp%10;
            temp=temp/10;
        }

        if(a%i ==0){
            if (sum==14)
            {
                printf("Non prime but sum is 14");
            }else{
                printf("Non prime but sum not 14");
            }           
            return 0;
        }
        i++;        
    }
    printf("Prime");
    if (sum==14)
    {
        printf("prime but sum is 14");
    }else{
        printf("prime but sum not 14");
    }
    
}