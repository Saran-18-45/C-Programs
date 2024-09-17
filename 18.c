#include<stdio.h>
void main()
{
int a,b,c,d;
printf("enter number of hours worked in a week");
scanf("%d",&a);
printf("enter rate per hour");
scanf("%d",&b);
printf("enter number of weeks in a month");
scanf("%d",&c);
d=a*b*c;
printf("monthly pay for workers is %d*%d*%d",&d);
scanf("%d",&d);
}