// Program to Make an appropriate structure for any student. Also accept one record and print it.
#include<stdio.h>
#include<conio.h>
typedef struct Student{
	char name[30];
	float cgpa;
	char branch[5];
	int sem;
	char gender;
} s;
int main(){
	s std1;
	printf("For a student enter details below....\n");
	printf("\nEnter Name of Student : ");
	scanf("%s",std1.name);
	printf("\nEnter Branch : ");
	scanf("%s",std1.branch);
	printf("\nEnter current Semester : ");
	scanf("%d",&std1.sem);
	printf("\nEnter Aggregate CGPA : ");
	scanf("%f",&std1.cgpa);
	printf("\nEnter Gender (M/F) : ");
	scanf(" %c",&std1.gender);
	printf("\nThe details of the student are as follows.....\n");
	getch();
	printf("\nName\t        Branch\tSem\tCGPA\tGender\n");
	printf("\n%s\t%s\t%d\t%4.2f\t%c",std1.name,std1.branch,std1.sem,std1.cgpa,std1.gender);
	getch();
	return 0;
}