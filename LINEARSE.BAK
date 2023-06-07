int lin_search(int b[],int s,int i)
{int ptr=0;b[s]=i;
 while(b[ptr]!=i)
    ptr++;
 if(ptr==s)
   return -1;
 else
   return ptr;
}
main()
{
int a[9]={8,1,2,6,5,9,7,3},size=8,item,loc;
printf("ENTER THE ELEMENT : ");
scanf("%d",&item);
loc=lin_search(a,size,item);
if(loc==-1)
  printf("\n%d not found in the array.\n",item);
else
  printf("\n%d found in the array at %d location.\n",item,loc+1);
}

