#include<stdio.h>
void main(){
int n;
printf("enter the number to be verified:\n");
scanf("%d",&n);
if (n % 55==0){
printf("the number is divisible by 5 and 11");
}
else{
printf("the number is not divisible by 5 and 11");
}
}
