#include<stdio.h>
void check_prime(int a);
int main(){
    int x;
    printf("enter a no :");
    scanf("%d",&x);
    check_prime(x);

}
void check_prime(int a){
     
    for(int i =2;i<a;i++){
        if(a%i == 0){
            printf("Non Prime");
            return;
        }
    }
    printf("Prime");

}