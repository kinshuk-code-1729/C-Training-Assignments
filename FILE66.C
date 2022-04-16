#include<stdio.h>
#include<conio.h>
#include<string.h>
typedef struct student
{
  char name[10];
  int marks;
  long rollno;
}s;
void main()
{
s s1[5],s2[5],r;
int i,n;

 FILE *p;
 clrscr();

p=fopen("C:\\temp\\IT2021.dat","wb");

 if(p==NULL)
 {
 printf("Can not open file\n" );
 getch();
 exit(1);
 }


 printf("Enter Data For\
  Students  name,marks\
  ,rollno\n");

 for(i=0;i<5;i++)
 {
 printf("\nEnter Data Now\n");
 scanf("%s%d%ld",s1[i].name,
 &s1[i].marks,
 &s1[i].rollno);
 fwrite(&s1[i],sizeof(s),1,p);
 }
 fclose(p);












 p=fopen("C:\\temp\\IT2021.dat","rb");
 printf("\nFile Contains Following \
 Records\n");

 for(i=0;i<5;i++)
 {
fread(&s2[i],sizeof(s),1,p);
printf("%s\t%d\t%ld\n",
s2[i].name,s2[i].marks
,s2[i].rollno);

 }

 fclose(p);

 getch();













  printf("\nWant to read\
  which specific record\n");
 scanf("%d",&n);

 p=fopen("C:\\temp\\IT2021.dat","rb");
 fseek(p,(n-1)*sizeof(s),SEEK_SET);
 fread(&r,sizeof(s),1,p);
printf("%s\t%d\t%ld\n"
,r.name,r.marks
,r.rollno);
getch();
}
