
#include<stdio.h>
#include<conio.h>

void sum(int a,int b)
{
int c;
c=a+b;
printf("\n%d",c);
}

void avg(float a,float b
,float c)
{
float d;
d=(a+b+c)/3;
printf("\n%f",d);
}

void main()
{
int i,j;
clrscr();
sum(4,6);
getch();
avg(2,8,9);
getch();
printf("\n Enter two ints\n");
scanf("%d%d",&i,&j);
sum(i,j);
getch();
}