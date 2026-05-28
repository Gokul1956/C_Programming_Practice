#include<stdio.h>
int main(){
int a,sum,sumd;
printf("Enter a NO :");
scanf("%d",&a);
sum = 0;
sumd=0;
while(a!=0){
sum = sum + (a%10);
a=a/10;
}
if(sum<10){
printf("RESULT : %d",sum);
}else{
while(sum !=0){
sumd = sumd+(sum%10);
sum=sum/10;
}

printf("RESULT :  %d",sumd);
}
return 0;
}
