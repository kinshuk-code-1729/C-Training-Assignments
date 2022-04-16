#include<stdio.h>
#include<conio.h>
int sum(int,int);
float avg(float,float,float);

void main()
{
int k;
clrscr();
k=sum(50,30);
k=k*2;
printf("\nk=%d",k);
printf("\n%d",sum(4,6));
printf("\n%f",avg(2,8,9));
getch();
}
int sum(int a,int b)
{
int c;
c=a+b;
return c;
}

float avg(float a,float b,float c)
{
float d;
d=(a+b+c)/3;
return d;
//printf("\nhello");
}
