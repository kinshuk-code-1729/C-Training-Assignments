// Program to Calculate Average And Percentage of user-defined numbers
#include<stdio.h>
int main(){
    float x,y,z,p,avg,t=300;
    printf("Enter three numbers between 1 to 100 : ");
    scanf("%f%f%f",&x,&y,&z);
    avg=(x+y+z)/3;
    p=((x+y+z)/t)*100;
    printf("\nThe Average of %d , %d and %d is %f",(int)x,(int)y,(int)z,avg);
    printf("\nThe Percentage of %d , %d and %d is %5.2f%%",(int)x,(int)y,(int)z,p);
return 0;
}