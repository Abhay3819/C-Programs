#include<stdio.h>
struct node
{
 int info;
 struct node*link;
};
struct node *START=NULL;
struct node* createnode()
{
 struct node *n;
 n=(struct node *)malloc(sizeof(struct node));
 return(n);
}
void insertnode()
{
 struct node *temp,*t;
 temp=createnode();
 printf("enter the number");
 scanf("%d",&temp->info);
 temp->link=NULL;
 if(START==NULL)
 START=temp;
 else
 {
  t=START;
  while(t->link!=NULL)
  t=t->link;
  t->link=temp;
 }

}
void deletenode()
{
 struct node *r;
 if(START==NULL)
 printf("list is empty");
 else
 {
 r=START;
 START=START->link;
 free(r);
 }
}
void viewlist()
{
 struct node *t;
 if(START==NULL)
 printf("list is empty");
 else
 {
 t=START;
 while(t!=NULL)
 {
 printf("%d",t->info);
 t=t->link;
 }
 }
}
main()
{
 int choice;
 while(1)
 {
 printf("\t\t\t\t\t\n1.insertion\n2.delition first value\n3.viewlist\n4.exit");
 printf("enter your choice");
 scanf("%d",&choice);
 clrscr();
 switch(choice)
 {
  case 1:insertnode();
  break;
  case 2:deletenode();
  break;
  case 3:viewlist();
  break;
  case 4:exit(0);
  default:printf("invalid choice");
 }
 getch();
 }
}