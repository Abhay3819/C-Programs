#include<conio.h>
void output(int a[],int s)
{int i;
 printf("\nOUTPUT");
 for(i=0;i<s;i++)
   {printf(" : %d",a[i]);
   }
}
int min(int b[],int s,int k)
{int m=b[k],j,l=k;
 for(j=k+1;j<s;j++)
    {if(m>b[j])
       {m=b[j];
	l=j;
       }
    }
 return l;
}
void sel_sort(int b[],int s)
{int k,loc;
 for(k=0;k<s;k++)
    {loc=min(b,s,k);
     if(loc!=k)
     {b[k]=b[k]+b[loc];
      b[loc]=b[k]-b[loc];
      b[k]=b[k]-b[loc];
     }
    }
}
main()
{int a[]={8,7,6,5,4,3},size=6;
 clrscr();
 output(a,size);
 sel_sort(a,size);
 output(a,size);
 getch();
}