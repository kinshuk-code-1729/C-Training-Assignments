// Program to find roots of a Quadratic Equation
#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c,dmt;
    float r1,r2;
    printf("For a standard quadratic equation,ax^2+bx+c=0,Enter the coefficients below");
    printf("\nEnter a : ");
    scanf("%d",&a);
    printf("\nEnter b : ");
    scanf("%d",&b);
    printf("\nEnter c : ");
    scanf("%d",&c);
    if(a==0) printf("\nValue of a should not be zero !!! , Please enter a non-zero number");
    else{ 
        dmt=b*b-4*a*c;
         if(dmt>0) {
            r1=(-b+sqrt(dmt))/(2*a);
            r2=(-b-sqrt(dmt))/(2*a);
            printf("\nWe Get Two DISTINCT REAL ROOTS");
        printf("\n1st root is %f & 2nd root is %f",r1,r2);
         }
        else if(dmt==0){
            r1=r2=-b/(2.0*a);
            printf("\nWe Get Two EQUAL REAL ROOTS");
            printf("\n1st and 2nd both roots  are %f and %f",r1,r2);
          }
        else printf("\nNo REAL ROOTS of the QUADRATIC EQUATION");
    } 
    return 0;
}