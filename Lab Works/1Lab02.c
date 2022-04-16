// Program to calculate avg. marks out of 3 subjects
#include<stdio.h>
int main()
{
 int x,y,z,p;
 char n[100];
 printf("Enter Marks of English out of 100 = ");
 scanf("%d",&x);
 printf("\nEnter Marks of Hindi out of 100 = ");
 scanf("%d",&y);
 printf("\nEnter Marks of Maths out of 100 = ");
 scanf("%d",&z);
 printf("\nEnter student full name = ");
 scanf("%s",&n);
 p=(x+y+z)*100/300;
 printf("\nThe percent of %s is %d",n,p);
 return 0;
}
