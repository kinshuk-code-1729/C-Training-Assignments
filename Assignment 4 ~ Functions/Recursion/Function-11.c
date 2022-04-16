// Program to print all natural numbers between 1 to n using recursion
#include<stdio.h>
int all_naturals(int x,int y){
    if(x>y)
    return 1;

printf("%d , ",x);
all_naturals(x+1,y);
}
int main(){
    int i=1,n;
    printf("Enter the value of \'n\' : ");
    scanf("%d",&n);
    printf("\nAll the natural numbers between 1 to %d are.......\n",n);
    all_naturals(i,n);
return 0;
}