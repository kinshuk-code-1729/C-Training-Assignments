// Program to find maximum and minimum elements in array using recursion
#include<stdio.h>
int arr_max(int x[10],int i){
    int MAX;
    if(i>=8){
        if(x[i]>x[i+1]){
            return x[i];
        }
        else{
            return x[i+1];
        }
    }
    MAX=arr_max(x,i+1);
    if(x[i]>MAX){
        return x[i];
    }
    else{
        return MAX;
    }
}
int arr_min(int y[10],int j){
    int MIN;
    if(j>=8){
        if(y[j]<y[j+1]){
            return y[j];
        }
        else{
            return y[j+1];
        }
    }
    MIN=arr_min(y,j+1);
    if(y[j]<MIN){
        return y[j];
    }
    else{
        return MIN;
    }
}
int main(){
    int arr[10],k,max,min;
    printf("Enter the elements for array....");
    for(k=0;k<10;k++){
        printf("\nEnter element %d : ",k+1);
        scanf("%d",&arr[k]);
    }
    max=arr_max(arr,0);
    min=arr_min(arr,0);
    printf("\nMax element = %d\tMin element = %d",max,min);
return 0;
}