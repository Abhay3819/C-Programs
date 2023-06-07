#include<stdio.h>
struct node
(
 int info;
 struct node *link;
);
struct node *start=null;
struct node *createNode()
(
struct node *n;
n=(struct node*)malloc(size of(struct node));
return(n);

)
void insertnode()
{
struct node*temp, *t;
temp=createnode();
printf("enter the number");
scanf("%d",&temp->info);
temp->link=null;
if(start==null)
 start=temp;
else
 {
 t=start;
 while(t->link!=null)
 t=t->link;
 t->link=temp;
 }
}