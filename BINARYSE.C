int bin_search(int a[],int s,int i)
{int l=0,u=s-1,mid=(l+u)/2;
 while(i!=a[mid]&&l<u)
   {if(i<a[mid])
      u=mid-1;
    else
      l=mid+1;
    mid=(l+u)/2;
   }
 if(i==a[mid])
    return mid;
 else
   return -1;
}
main()
{int a[100]={2,3,5,7,11,13,17,19,23,29,31,37,41},size=13,item,loc;
 printf("\nENTER THE ELEMENT : ");
 scanf("%d",&item);
 loc=bin_search(a,size,item);
 if(loc==-1)
   printf("\n%d is not found.\n",item);
 else
   printf("%d is found at %d location.",item,loc+1);
}
