#include<stdio.h>
int  main() {
    int d,y,m;
    printf("Enter the date in dd/mm/yyyy format: ");
    scanf("%d",&d);
    y=d/365;
    d=d%365;
    m=d/30;
    d=d%30+1;
    printf("year %d\n",y);
    printf("month  %d\n",m);
    printf("day %d\n",d);
    }