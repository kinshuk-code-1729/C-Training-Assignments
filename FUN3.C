#include<stdio.h>
#include<conio.h>
int xpy()
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
return z;
   }
   int fact(int n)
   {
     int i,f=1;
  // clrscr();
 //  printf("\nEnter A No\n");
   //scanf("%d",&n);
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
return f;
    }


int sum(int a,int b)
{
int c;
c=a+b;
return c;
}

float avg(float a,float b
,float c)
{
float d;
d=(a+b+c)/3;
return d;
//printf("\nhello");
}

void main()
{
int k;
clrscr();
/*k=sum(50,30);
k=k*2;
printf("\nk=%d",k);
printf("\n%d",sum(4,6));
printf("\n%f",avg(2,8,9));
printf("\n%d",xpy());  */
printf("\n%d",fact(xpy()));
getch();
}