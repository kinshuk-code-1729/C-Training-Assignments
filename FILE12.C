#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
 char a[50],b[50],i;
  FILE *p;
 clrscr();

 p=fopen("C:\\temp\\f2.txt","w");
 while(1)
 {
 printf("Enter A Line\n");
 gets(a);
 strcat(a,"\n");
 fputs(a,p);
 printf("\nDo U Want To Enter\
  More Lines: Y/N\n");

 scanf("%c",&i);
 if(i=='N'||i=='n')
 break;
 fflush(stdin);
 fflush(stdout);
 }

 fclose(p);
 p=fopen("C:\\temp\\f2.txt","r");
 printf("\nFile Contains\
  Following String");

 while(fgets(b,50,p)!=NULL)
 {

 printf("\n%s",b);
 }
 fclose(p);

 getch();

}