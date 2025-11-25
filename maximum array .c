#include<stdio.h>
#include<conio.h>
    void main ()
    {
    int i,a[5],max;
    clrscr();
    printf("enter 5 integer number to continue:\n");
    for(i=0;i<=4;i++)
    {
    scanf("%d",&a[i]);
    }
    max=a[0];
    for(i=0;i<5;i++)
    {
    if(a[i]>max)
    {
    max=a[i];
    }
    }
    printf("max array element:%d",max);
    getch();
    }