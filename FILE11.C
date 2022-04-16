#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
 char a,b,i;
 FILE *p;
 clrscr();
 p=fopen("C:\\temp\\cs21.txt","w");
 if(p==NULL)
 {
 printf("Can not open file\n" );
 getch();
 exit(1);
 }

 while(1)
 {
 printf("Enter A Char\n");
 scanf("%c",&a);
 fputc(a,p);
 printf("\nDo U Want To Enter\
  More chars: Y/N\n");
 scanf(" %c",&i);
 if(i=='N'||i=='n')
 break;

 fflush(stdin);
 fflush(stdout);




 }

 fclose(p);
 p=fopen("C:\\temp\\cs21.txt","r");
  if(p==NULL)
 {
 printf("Can not open file\n" );
 getch();
 exit(1);
 }

 printf("\nFile Contains \
 Following Chars");

 while(1)
 {
  b=fgetc(p);
  if(b==EOF)
  break;
  printf("\n%c",b);


 }
 fclose(p);

 getch();

}