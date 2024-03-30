#include<stdio.h>
int  main() {
    int a,b,c;
    printf("Enter the value of a: ");
    scanf("%d",&a);
    printf( "Enter the value of b: ");
    scanf("%d", &b);
    printf("enter the vaiue of c");
scanf( "%d", &c );
if (a>b)
{
   if (b > c )
      printf("\n%d is greater than %d ",a,"is greater than" ,c);
     else
       printf("\n%d is greater than %d and %d",a,"and" ,c);
}
else
{
   if (a > c)
        printf("\n%d is greater than %d ",b,"is greater than" ,c);
   else
     printf("\n%d is greater than %d and %d",b,"and" ,c);
         }
return 0;
}