#include <stdio.h>
int main() 
{
 int a;
 printf("Enter an integer: ");
 scanf("%d", &a);
 if (a==0||a<0)
 {
   printf("The number is negative.\n");
 }
 else
 {
   printf("The number is  positive.\n");
 }
}