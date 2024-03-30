#include<stdio.h>
int main()
{
int a,b,c,d;
float e;
printf("enter principal amount");
scanf("%d",&a);
printf("enter reat of interest");
scanf("%d",&b);
printf("enter time in years");
scanf("%d",&c);
d=a*b*c;
e=d/100;
printf("simple interest =%f",e);
}