#include<stdio.h>
int main(){
    char str[51];
    printf("Enter no : ");
    scanf("%s",str);
    int i = 0;
    int isvalid =1;
    while(str[i] == '\0')
    {
        
        if (str[i]<=0 && str[i]>=9)
        {
            i++;
        }
        else{
            isvalid=0;
            break;
        }
        
        
    }
    if(isvalid){
        printf("valid");

    }else{
        printf("Invalid");
    }
}