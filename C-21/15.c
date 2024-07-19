#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

typedef struct
{
	char Name[100];
	int Roll;
	double YGPA;
}stu;

int main()
{
	FILE *fp;
	
	fp=fopen("Stud_Info.txt","r");
	
	if(fp==NULL)
	{
		printf("Error! File couldnt not be found");
		exit(0);
	}
	int i;
	stu st[10];
	
	for(i=0;i<10;i++)
	{
		fscanf(fp,"%d %s %lf",&st[i].Roll,st[i].Name,&st[i].YGPA);
	}
	stu highest_marks;
	highest_marks=st[0];
	for(i=1;i<10;i++)
	{
		if(st[i].YGPA>highest_marks.YGPA)
		{
			highest_marks=st[i];
		}
	}
	fclose(fp);
	fp=fopen("Stud_Info.txt","a");
	fprintf(fp,"The topper student is \nRoll number: %d \nName: %s \nYGPA: %lf",highest_marks.Roll,highest_marks.Name,highest_marks.YGPA);
	fclose(fp);
	
	printf("Result has been declared !!");
}
