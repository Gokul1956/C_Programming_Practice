#include<stdio.h>
int main(){
    char str[51];
    char str2[51];
    printf("Enter no : ");
    scanf("%s",str);
    int i = 0;
    while(str[i] != '\0'){
        while(str[i]=='0')
        {
            i++;
        }
        if (str[i]=='\0')
        {
            printf("0");
            break;
        }
        
        printf("%s",&str[i]);
        break;
    } 
   
    
}