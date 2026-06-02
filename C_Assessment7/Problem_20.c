#include<stdio.h>
void disp_2digits_even_sum6();
int main(){
    int x;
    disp_2digits_even_sum6();

}
void disp_2digits_even_sum6(){
    int Primecount =0;
   
    for(int i =2;i<10;i++){
        int isprime = 1;
        for(int j =2;j<i;j++){
            if(i%j == 0){
               isprime=0;
               break;             
            }
        }
        if(isprime == 1)
        {
            Primecount++;
        }        
    }
    printf("%d",Primecount);

    

}