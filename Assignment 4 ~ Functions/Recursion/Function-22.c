// Program to display all array elements using recursion
#include<stdio.h>
int display_array(int a[5],int first){
    if(first>=5){
        return 1;
    }
    printf("%d\t",a[first]);
    display_array(a,first+1);
}
int main(){
    int A[5],i;
    printf("Enter the elements for array....");
    for(i=0;i<5;i++){
        printf("\nEnter element %d : ",i+1);
        scanf("%d",&A[i]);
    }
    printf("\nThe elements of the array are : ");
    display_array(A,0);
return 0;
}