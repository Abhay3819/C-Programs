#include<conio.h>
void output(int a[],int s)
{int i;
 printf("\nOUTPUT");
 for(i=0;i<s;i++)
   {printf(" : %d",a[i]);
   }
}
void bubble_sort(int a[],int s)
{int k,p,x;
 for(k=0;k<s-1;k++)
   {for(p=0;p<=s-2-k;p++)
      {if(a[p]>a[p+1])
	 {x=a[p];
	  a[p]=a[p+1];
	  a[p+1]=x;
	 }
      }
   }
}
main()
{int a[5]={8,7,6,5,4},size=5;
 clrscr();
 output(a,size);
 bubble_sort(a,size);
 output(a,size);
 getch();
}