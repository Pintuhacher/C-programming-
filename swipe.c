#include <stdio.h>
int  main() 
{
    int a = 10,b=20,c;
    c=a;
    a=b;
    b=c;
    printf("The value of a is %d %d\n",b,a);
    printf("The value of a is %d %d\n",a,b);
}