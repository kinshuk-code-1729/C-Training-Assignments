// Program to find sum of all natural numbers between 1 to n using recursion
#include<stdio.h>
int sum_natural(int p,int q){
    if(p==q){
        return p;
    }
    else{
        return p + sum_natural(p+1,q);
    }
}
int main(){
int first,last,s;
printf("Enter 1st natural number : ");
scanf("%d",&first);
printf("\nEnter last natural number : ");
scanf("%d",&last);
s=sum_natural(first,last);
printf("\nSum of all natural numbers from %d to %d is : %d",first,last,s);
return 0;
}