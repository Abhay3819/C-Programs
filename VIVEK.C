#include "stdio.h"
#include "unistd.h"

//Global variables
int i,j,option,error,check=0;
    char name[50], Class[20], repeat;
    int roll_no, sj[15], n, marks[10], total;
    float per;
    const char *subjects[15]={"Kannada","English","Hindi","Marathi","Science","SS","Maths","Chemistry",
                  "Physics", "Biology","CS","Accounting","Economics","History","Business"};

//Title for pages
void title(){

    printf("\n\t\t\t\t\t\t\t\t\t================================================");
    printf("\n\t\t\t\t\t\t\t\t\t           STUDENT MARKSHEET PROGRAM");
    printf("\n\t\t\t\t\t\t\t\t\t================================================");
}


//According to the percentage printing the Hash Tags(#). This is an extra feature.
void percentage(float per){
     int i;
    printf("\n\n\t\t\t\t\t\t\t\t\t");
     for(i=0;i14){

     		printf("\n\t\t\t\t\t\t\t\t\tERROR : %dth subject is not exist\n",sj[i]);
     		error=1;
     		break;
		 }

     	for(j=i+1;j=85){
    	printf("\n\n\t\t\t\t\t\t\t\t\tCongratulation %s, you scored %0.0f%%",name,per);
	}
	else if(per>=60 && per<85){
    	printf("\n\n\t\t\t\t\t\t\t\t\tVery Nice %s, you scored %0.0f%%",name,per);
	}
	else if(per>=35 && per<60){
    	printf("\n\n\t\t\t\t\t\t\t\t\tNot bad %s, you scored %0.0f%%",name,per);
	}
    else if(per<35){
    	printf("\n\n\t\t\t\t\t\t\t\t\tNo problem %s, try again next time.",name);
        printf("\n\t\t\t\t\t\t\t\t\t\t Your score is %0.0f%%",per);
	}

    printf("\n\n\t\t\t\t\t\t\t\t\tYou want to continue?(Y/N) : ");
    scanf("%s",&repeat);
    total=0;
}


int main(){

    while(1){

	    system("cls");
         system("Color F0");
         error=0;

         //Creating a main menu
	    title();
	    printf("\n\t\t\t\t\t\t\t\t\t\t    1. Create Marksheet\n");
	    printf("\n\t\t\t\t\t\t\t\t\t\t    2. Exit\n");
        printf("\n\t\t\t\t\t\t\t\t\tChoose your option : ");
	    scanf("%d",&option);
	    switch(option){
	    	case 1:
               //Calling an Addmark() function
	    	   //Addmark();
               do{
                   StudentDetails();
                   SubjectDetails();
                   MarksData();
                   calculation();
                   Display();
                  // percentage(per);
               }while (repeat=='y'||repeat=='Y');

	    	   break;

	        case 2:
	        	system("cls");
                printf("\n\n\t\t\t\t\t\t\t\t\tThank You for using this software!");
                exit(0);

	    	default:
                //Error statement
                printf("\n\n\t\t\t\t\t\t\t\t      ERROR : You are trying to choose non existing option!\n");
                printf("\n\t\t\t\t\t\t\t\t\t\t");
                system("pause");
                system("cls");
		}
    }

return 0;

 }
