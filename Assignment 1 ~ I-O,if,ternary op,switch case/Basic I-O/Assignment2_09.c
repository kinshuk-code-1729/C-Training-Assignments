// Assume salary=40,000, calculate 20% of salary and also calculate net salary
#include<stdio.h>
int main(){
    int s=40000,tp,n;
    tp=0.2*s;
    n=s+tp;
    printf("Intially the Salary is Rs. %d",s);
    printf("\n20%% of this salary is Rs. %d",tp);
    printf("\nNet Salary After the Increment of 20%% is Rs. %d",n);
return 0;
}