#include <stdio.h>
#include <conio.h>
void main(int argc,char *argv[])
{
int i;
clrscr();
printf("\n total no of cmd arg=%d\n",argc);
for(i=0;i<argc;i++)
printf("\nargv[%d]=%s",i,argv[i]);
getch();
}