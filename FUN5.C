#include<stdio.h>
#include<conio.h>
int *sum(int a,int b)
{
  static int c;
  c=a+b;
   printf("\n&c=%u\n",&c);
  return &c;
}
float *avg(int a,int b,
float c)
{
static float d;
d=(a+b+c)/3;
return &d;

}
void main()
{
int *p;
 clrscr();
 p=sum(5,6);
 printf("\np=%u\n",p);
printf("\n%d",*p);
printf("\n%d",*sum(10,20));
printf("\n%f",*avg(10,20,30));
getch();

}