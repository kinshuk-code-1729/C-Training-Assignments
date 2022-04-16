// Program to find sum of all even or odd numbers in given range using recursion
#include<stdio.h>
int sum_even(int x,int y){
    if(x==y){
        return x;
    }
    else{
        return x + sum_even(x+2,y);
    }
}
int sum_odd(int u,int v){
    if(u==v){
        return u;
    }
    else{
        return u + sum_odd(u+2,v);
    }
}
int main(){
    int lb,ub,s1,s2;
    printf("Enter start & end values : ");
    scanf("%d%d",&lb,&ub);
    s1=sum_even(lb,ub);
    s2=sum_odd(lb,ub);
    if(lb%2==0){
        printf("\nSum of all even numbers from %d to %d is %d",lb,ub,s1);
    }
    else{
        printf("\nSum of all odd numbers from %d to %d is %d",lb,ub,s2);
    }
return 0;
}