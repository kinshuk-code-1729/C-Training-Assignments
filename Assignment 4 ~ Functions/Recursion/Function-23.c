// Program to find sum of elements of array using recursion
#include<stdio.h>
int arr_sum(int x[5],int e1){
    if(e1>=5){
        return 0;
    }
    return x[e1] + arr_sum(x,e1+1);
}
int main(){
    int X[5],j,sum;
    printf("Enter the elements for array....");
    for(j=0;j<5;j++){
        printf("\nEnter element %d : ",j+1);
        scanf("%d",&X[j]);
    }
    sum=arr_sum(X,0);
    printf("\nSum of all the elements = %d",sum);
return 0;
}