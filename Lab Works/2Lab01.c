// Program to swap two numbers using a temporary variable
#include<stdio.h>
int main()
{
    int a,b,temp;
    printf("Enter First Number : ");
    scanf("%d",&a);
    printf("\nEnter Second Number : ");
    scanf("%d",&b);
    printf("\nNumber Before Swapping 1st number = %d",a);
    printf("\nNumber Before Swapping 2nd number = %d",b);

// Number Swapping
temp=a;
a=b;
b=temp;
printf("\nNumber after swapping first number = %d",a);
printf("\nNumber after swapping second number = %d",b);
return 0;
}