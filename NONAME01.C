#include<stdio.h>
#include<conio.h>
int abhay(int a,int b)
{
int c;
c=a*b;
return c;
}
void main()
{
int a=4,b=6,c;
clrscr();
c=abhay(a,b);
printf("pro:%d ",c);
getch();
}