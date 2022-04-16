// Program to find diameter, circumference and area of circle using functions
#include<stdio.h>
int diameter(int r){
    return (2*r);
}
double circumference(int r){
    return (2*3.141593*r);
}
double area(int r){
    return (3.141593*r*r);
}
int main(){
    int radius;
    printf("Enter Radius of Circle : ");
    scanf("%d",&radius);
    printf("\nDiameter of given circle is : %d",diameter(radius));
    printf("\nCircumference of given circle is : %lf",circumference(radius));
    printf("\nArea of given circle is : %lf",area(radius));
    return 0;
}