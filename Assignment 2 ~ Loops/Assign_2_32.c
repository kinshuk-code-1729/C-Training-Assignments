// Program to accept any number and display the sum of its each digit until we get single digit
#include<stdio.h>
#include<conio.h>
int main(){
int s=0,n;
printf("Enter any number : ");
scanf("%d",&n);
while(n/10!=0){
    s=0;
    while(n!=0){
        s+=n%10;
        n/=10;
    }
    printf("\nSum = %d",s);
    getch();
    n=s;
}
printf("\nFinal Sum = %d",s);
return 0;
}