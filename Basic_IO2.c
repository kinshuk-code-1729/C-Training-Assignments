// Input-Output of 1 integer,2 float, 1 long double and 2 character
#include<stdio.h>
int main(){
    int n;
    double at;
    float t,p;
    char ap,rs;
    printf("Did Student appeared in exam ?? (Y/N) : ");
    scanf("%c",&ap);
    printf("\nEnter Roll no. : ");
    scanf("%d",&n);
    printf("\nEnter avg. theory marks : ");
    scanf("%f",&t);
    printf("\nEnter avg. practical marks : ");
    scanf("%f",&p);
    printf("\nEnter aggregate marks in all : ");
    scanf("%lf",&at);
    printf("Pass or Fail (P/F) : ");
    scanf(" %c",&rs);
    printf("\nThe Student was present (Y/N) : %c",ap);
    printf("\nRoll no. : %d",n);
    printf("\nAvg. Theory Marks : %f",t);
    printf("\nAvg. Practical Marks : %f",p);
    printf("\nAggregate Marks overall : %lf",at);
    printf("\nResult Status : %c",rs);
    return 0;
}