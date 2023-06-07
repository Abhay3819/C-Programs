#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void input();
int calculations();
void show();
void m3();
void edc();
void oopds();
void nas();
void result();
void remark();
int m,m1,n,n1,o,o1,p,p1,q1,q2,r,total,per,t1,t2,t3,t4,t5;
char b[20],ch[20],a[50],e[8],d[30],grade,res[5],rem[16],q,x,y,u,v;
char s[] = "pass";
char s1[] = "fail";
char s3[] = "Congratulations";
char s4[] = "     ";

int main(){
	clrscr();
	input();
	calculations();
	m3();
	edc();
	oopds();
	nas();
	result();
	remark();
	show();
	getch();
	return 0;

}
void input(){
	printf("Enter your name : ");
	gets(ch);
	printf("Enter place : ");
	gets(b);
	printf("Enter clg name : ");
	gets(a);
	printf("Enter DOB (dd/mm/yyyy) : ");
	gets(d);
	printf("Enter Medium : ");
	gets(e);
	printf("Enter ROLL NO : ");
	scanf("%d",&r);
	goto ayu;
	ayu:
		printf("\nEnter MATHEMATICS III ");
	    scanf("%d",&m);
	    if(m>=80){
			printf("\nplz enter less than 80 ");
		    goto ayu;
		}
		else{
		 goto ayu1;
		}
	ayu1:
		printf("\nEnter DBMS marks: ");
	    scanf("%d",&n);
	    if(n>=80){
			printf("\nplz enter less than 80 ");
		    goto ayu1;
		}
		else{
		 goto ayus1;
		}
		ayus1:
		printf("\nEnter DBMS(prac) marks: ");
	    scanf("%d",&n1);
	    if(n1>=20){
			printf("\nplz enter less than 20 ");
		    goto ayus1;
		}
		else{
		 goto ayu3;
		}

	ayu3:
		printf("\nEnter OOPS & DS marks: ");
	    scanf("%d",&p);
	    if(p>=80){
			printf("\nplz enter less than 80 ");
		    goto ayu3;
		}
		ayus3:
		printf("\nEnter OOPS & DS(Pract) marks: ");
	    scanf("%d",&p1);
	    if(p1>=20){
			printf("\nplz enter less than 20 ");
		    goto ayus3;
		}
	ayu4:
			printf("\nSoftware marks: ");
	    scanf("%d",&q1);
	    if(q1>=80){
			printf("\nplz enter less than 80 ");
		    goto ayu4;
		}
}
void show(){
	int i=0,i1=0,j=0,j1=0,k=0,k1=0,l=0,l1=0;
	while(i1<77){
		printf("*");
		i1++;}
	printf("\n| \t\t\t THIRD SEM OF B.E. ,  WINTER 2022 ");
	printf("\t\t|\n");
	while(i<78){
		printf("-");
		i++;
	}
	printf("\n| NAME : %s \t \t",ch);
	printf("\n| DOB : %s\t\t\t  PLACE : %s",d,b);
	printf("\n| CLG NAME : %s\t \t ",a);
	printf("\n| MEDIUM : %s\t\t\t  ROLL NO. : %d \n",e,r);
	while(j<78){
		printf("-");
		j++;
	}
	printf("\n| SUBJECTS\t\t| marks\t| practical\t| Total\t| Obtained\t|\n");
	while(k<78){
		printf("-");
		k++;
	}
	printf("\n| MATHEMATICS III\t\t| %d\t| %d\t|\t100\t|\t%d %c |",m,m1,m+m1,q);
	printf("\n| Database Management\t\t| %d\t| --\t|\t80\t|\t%d %c |",n,n,x);
	printf("\n| Database Management(prac)     | --\t| %d\t|\t20\t|\t%d   |",n1,n1);
	printf("\n| OOPS & DS \t\t\t| %d\t| --\t|\t80\t|\t%d %c |",p,p,u);
	printf("\n| OOPS & DS(prac)\t\t| --\t| %d\t|\t20\t|\t%d   |",p1,p1);
	printf("\n| SOFTWARE \t\t\t| %d\t| %d\t|\t100\t|\t%d %c |\n",q1,q2,q1+q2,v);
	while(l<78){
		printf("-");
		l++;
		}
	printf("\n| Total marks obt  | Total Marks  | Percentage  | Result  | GRADE  |\n");
	while(l1<78){
		printf("-");
		l1++;
		}
	printf("\n|\t%d\t| \t 400 \t|\t %d  \t|    %s |   %c \t|\n",total,per,res,grade);
	while(k1<78){
		printf("*");
		k1++;}
	printf("\n|\t\t%s  You are %sed !",rem,res);
	printf("\t\t\t|\n");
	while(j1<78){
		printf("*");
		j1++;}
	printf("\n\t\t\t\t\tMADE BY ABHAY SHARMA :)");

}
int calculations(){

	char res[5];
	t1=m+m1;
	t2=n+n1;
	t4=p+p1;
	t5=q1+q2;
	total = t1+t2+t4+t5;
	per = total/4;


	if(per>= 90)
	      grade = 'A';
    else if(per>= 80)
	  grade = 'B';
    else if(per>= 70)
	  grade = 'C';
	else if(per>= 60)
	  grade = 'D';
	else if(per>= 40)
	  grade = 'E';
	else
	  grade = 'F';
}
void m3(){
	if(t1<40){
		q ='#';

	}
	else
	    q = ' ';
	fflush(stdin);

}
void edc(){
	if(t2<40){
		x ='#';

	}
	else
	    x = ' ';
	fflush(stdin);
}
void oopds(){
	if(t4<40){
		u ='#';
		fflush(stdin);
	}
	else
	    u = ' ';
	fflush(stdin);
}
void nas(){
	if(t5<40){
		v ='#';
		fflush(stdin);
	}
	else
	    v = ' ';
	fflush(stdin);
}
void result(){
	if(per>40){
		strcpy(res,s);
	}
	else
	    strcpy(res,s1);
}
void remark(){
	if(per>40){
		strcpy(rem,s3);
	}
	else
	    strcpy(rem,s4);
}
