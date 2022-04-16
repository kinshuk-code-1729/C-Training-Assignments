// Program to print all even or odd numbers in given range using recursion
#include<stdio.h>
int all_evens(int x,int y){
    if(x>y)
    return 1;

printf("%d , ",x);
all_evens(x+2,y);
}
int all_odds(int m,int n){
    if(m>n)
    return 1;

printf("%d , ",m);
all_odds(m+2,n);
}
int main(){
    int start,end;
    printf("Enter the start and end of the range : ");
    scanf("%d%d",&start,&end);
    if(start%2==0){
        printf("\nAll even numbers from %d to %d are.....\n",start,end);
        all_evens(start,end);
    }
    else{
        printf("\nAll odd numbers from %d to %d are.....\n",start,end);
        all_odds(start,end);
    }
return 0;
}