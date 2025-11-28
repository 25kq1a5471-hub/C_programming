#include<stdio.h>
#include<conio.h>
void main()
{
int a;
void printnum (int);
a=10;
printf("\nin main end a=%d",a);
printnum(a);
printf("\nin main end a=‰d",a);
}
void printnum(int a)
{
a++;
printf("\nin printnum for a=%d",a);
}
    