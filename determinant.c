#include<stdio.h>
#include<math.h>

void main(){
float a=0.0f,b=0.0f,c=0.0f,det=0.0f;
printf("enter the value of a,b,c:");
scanf("%f%f%f",&a,&b,&c);
det=sqrt(b*b-4*a*c);
printf("determinent value is %f",det);
}