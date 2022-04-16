// Input-Output of 1 integer,1 float and 1 character
#include<stdio.h>
int main(){
    int x;
    float y;
    char ch;
    printf("Enter first letter of name : ");
    scanf("%c",&ch);
    printf("\nEnter Roll no. : ");
    scanf("%d",&x);
    printf("\nEnter average Marks : ");
    scanf("%f",&y);
    printf("\nName's 1st Letter : %c",ch);
    printf("\nRoll no. : %d",x);
    printf("\nAggregate Marks : %f",y);
    return 0;
}