#include<stdio.h>
#include<conio.h>
void output(int a[],int s)
{int i;
 printf("\nOUTPUT");
 for(i=0;i<s;i++)
   {printf(" : %d",a[i]);
   }
}
void ins_sort(int b[],int s)
{int k,p,temp;
 for(k=1;k<s;k++)
   {temp=b[k];
    for(p=k-1;temp<b[p]&&p>=0;p--)
      {b[p+1]=b[p];
      }
      b[p+1]=temp;
   }
}
main()
{int a[]={8,1,2,6,5,9,7,3},size=8;
 clrscr();
 output(a,size);
 ins_sort(a,size);
 output(a,size);
 getch();
}
