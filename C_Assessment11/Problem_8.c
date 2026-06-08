#include <stdio.h>
void strcomp(char src[],char dst[]){
   int i =0;
   while (src[i] != '\0' || dst[i] !='\0' )
   {
     if(src[i] != dst[i]){
        printf("Failure");
        return;
     }
     i++;
   }
   printf("Success");
   
}
int main(){
    
    char src[50];
    char dst[50];

    printf("Enter arr :");
    scanf("%s",src);
    printf("enter dst");
    scanf("%s",dst);
    
    strcomp(src,dst);

    return 0;
}