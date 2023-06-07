// DIGITAL CLOCK
#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
{
 int h,m,s;
 clrscr();
 for(h=0;h<23;h++)
 {
  for(m=0;m<59;m++)
  {
   for(s=0;s<59;s++)
   {
    printf("\n%d:%d:%d",h,m,s);
    delay(1000);
    clrscr();
   }
   printf("\n%d:%d:%d",h,m,s);
    clrscr();
  }
  printf("\n%d:%d:%d",h,m,s);
    clrscr();
 }
 getch();
}