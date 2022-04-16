// Program to perform perform sum,subtraction,product,division and average on 2 user defined numbers
#include<stdio.h>
int main()
{
    int x,y,a,b,m,d,s;
    printf("Enter two numbers : \n");
    scanf("%d %d",&x,&y);
    s=x+y;
    printf("\nThe Sum of A=%d and B=%d is %d",x,y,s);
    b=x-y;
    printf("\nThe Subtraction of A=%d and B=%d is %d",x,y,b);
    d=x/y;
    printf("\nThe Division of A=%d and B=%d is %d",x,y,d);
    m=x*y;
    printf("\nThe Multiplication of A=%d and B=%d is %d",x,y,m);
    a=(x+y)/2;
    printf("\nThe Average of A=%d and B=%d is %d",x,y,a);
    return 0;
}
