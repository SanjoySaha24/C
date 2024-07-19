#include<stdio.h>
typedef struct
{
	int RollNo;
	char name[100];
	char course[100];
	double ygpa;
}student;
void read(student *stu)
{
	printf("enter roll no. of student \n");
	fflush(stdin);
	scanf("%d",&stu->RollNo);
	printf("enter the name of student \n");
	fflush(stdin);
	gets(stu->name);
	printf("enter the course of student \n");
	fflush(stdin);
	gets(stu->course);
	printf("enter ygpa of student \n");
	fflush(stdin);
	scanf("%lf",&stu->ygpa);
}
void display(student *stu)
{

	printf("rollnumber %d \n",stu->RollNo);
    printf("name  ");
	puts(stu->name);
	printf("\n");
	printf("course  ");
	puts(stu->course);
	printf("\n");
	printf("ygpa  ");
	printf("%.2lf",stu->ygpa);
	printf("\n");
	}
void edit(student *stu)
{
	int choice;
	do{
	
	printf("What do you want to edit? \n");
	printf("1. Roll number \n 2. name \n 3. course \n 4. ygpa  \n ");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1: printf("Enter new roll number \n");
		fflush(stdin);
		        scanf("%d",&stu->RollNo);
		        break;
		case 2:  printf("Enter new name \n");
		fflush(stdin);
		        gets(stu->name);
		        break;   
		case 3:printf("Enter new course \n");
		fflush(stdin);
		        gets(stu->course);
		        break;
		case 4:printf("Enter new roll number \n");
		fflush(stdin);
		        scanf("%lf",&stu->ygpa);
		        break;	
		default: printf("Invalid input");
	}
	printf("Do you want to continue? Press 0 to exit \n");
	scanf("%d",&choice);
	}while(choice!=0);
}
	

int main()
{
    int n,i,r;
	printf("Enter the number of students - ");
	scanf("%d",&n);
	student s[10];
	for(i=0;i<n;i++)
	{
		read(&s[i]);
		
	}
	printf("The details are : \n");
	for(i=0;i<n;i++)
	{
		display(&s[i]);
		printf("\n \n");
	}
	printf("Enter the roll number of the student whose details are to be modified \n");
	scanf("%d",&r);
	for(i=0;i<n;i++)
	{
		if(r==s[i].RollNo)
		{
		edit(&s[i]);
		break;
	}
	}
	if(i==n)
	printf("student not found \n");
	
	printf("Modified records \n");
	
	for(i=0;i<n;i++)
	{
		display(&s[i]);
		printf("\n \n");
	}
}
