#include <stdio.h>
void memcomp(int src[],int dst[],int size){
    for(int i =0;i<size;i++)
    {
       if(src[i]!=dst[i]){
        printf("failure");
        return;
       } 
    }
    printf("Success");
}
int main(){
    int size;
    
    printf("Enter the size of arrays : ");    
    scanf("%d",&size);
    int src[size];
    int dst[size];
    printf("Enter arr :");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&src[i]);
    }
    printf("enter dst");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&dst[i]);
    }
    memcomp(src,dst,size);

    return 0;
}