// Program to perform perform sum,subtraction,product,division using different format specifiers
#include<stdio.h>
int main()
{
    int x,y,a,s;
    long m; float d;
    printf("Enter two numbers : ");
    scanf("%d %d",&x,&y);
    a=x+y;
    printf("\n%d + %d = %d",x,y,a);
    s=x-y;
    printf("\n%i - %i = %i",x,y,s);
    m=(long)x*(long)y;
    printf("\n%d X %d = %ld",x,y,m);
    d=(float)x/(float)y;
    printf("\n%d / %d = %f",x,y,d);
    return 0;
}