// Program to accept any character using getch(), getche() and getchar() and feel the difference
#include<stdio.h>
#include<conio.h>
int main(){
char x,y,z;
printf("Enter 1st character : ");
x=getch();
printf("\nchar 1 is \'%c\'",x);
printf("\nEnter 2nd character : ");
y=getche();
printf("\nchar 2 is \'%c\'",y);
printf("\nEnter 2nd character : ");
z=getchar();
printf("\nchar 3 is \'%c\'",z);
return 0;
}