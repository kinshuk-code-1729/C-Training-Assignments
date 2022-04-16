// Program to accept any character and print its ASCII code
#include<stdio.h>
int main()
{
    char ch;
    printf("Input a character : ");
    scanf("%c",&ch);
    printf("\nASCII code of \'%c\' = %d",ch,(int)ch);
 return 0;
}