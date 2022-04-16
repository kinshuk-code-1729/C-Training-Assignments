// Input-Output of 1 integer,1 double and 1 character
#include<stdio.h>
int main(){
    double m;
    char s;
    int r;
    printf("\nEnter Roll no. : ");
    scanf("%d",&r);
    printf("\nEnter Average Marks : ");
    scanf("%lf",&m);
    printf("Pass or Fail(P/F) : ");
    scanf(" %c",&s);
    printf("\nRoll no. : %d",r);
    printf("\nAverage Marks : %lf",m);
    printf("\nStatus (P/F) : %c",s);
    return 0;
}