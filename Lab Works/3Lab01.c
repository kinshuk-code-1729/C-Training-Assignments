// Program To Find Age For Voting
#include<stdio.h>
int main(){
    int a;
    printf("Enter your Age : ");
    scanf("%d",&a);
    if(a<=0) printf("\nEnter Valid Age !!!, Age cannot be negative or zero !!!");
    else if(a>=18) printf("\nYou're Eligible for Voting");
    else printf("\nYou're not Eligible For voting");
  return 0;
}