// Program to 
#include<stdio.h>
int main(){
    float v,w,x,y,z,p,s,t=500;
    printf("Enter marks out of 100 of all 5 subjects : ");
    scanf("%f%f%f%f%f",&v,&w,&x,&y,&z);
    s=v+w+x+y+z;
    p=(s/t)*100;
    printf("\nThe Percentage of the student is aggregate %4.1f %%",p);
return 0;
}