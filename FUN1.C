#include<stdio.h>
#include<conio.h>

void xpy()
{
  int i,x,y,z=1;
   //clrscr();
   printf("\nEnter values for\
    x and y\n");
   scanf("%d%d",&x,&y);
   for(i=1;i<=y;i++)
   {
   z=z*x;
   printf("\ni=%d\tz=%d"
   ,i,z);
   }
   printf("\n%d^%d is=%d"
   ,x,y,z);
   }
   void fact()
   {
     int i,f=1,n;
  // clrscr();
   printf("\nEnter A No\n");
   scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    f=f*i;
    printf("\nThe f=%d is\
     and i =%d\
     ",f,i);

    }
    printf("\nThe Fact Of\
    %d is =%d",n,f);
    getch();
    }

void hello()
{
  printf("\nHello");
}
void hi()
{

  hello();
  printf("\nhi");
}
void sum()
{
int a,b,c;
printf("\nEnter Two No\n");
scanf("%d%d",&a,&b);
c=a+b;
printf("\n%d",c);
}

void main()
{
clrscr();
hello();
hi();
sum();
xpy();
fact();
getch();
}