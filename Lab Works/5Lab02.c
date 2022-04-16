// Input 2 numbers , minus the first with 2nd and the result left with table of 2nd until net result is zero
#include<stdio.h>
int main(){
    int x,y,j;
    printf("Enter two Numbers : ");
    scanf("%d%d",&x,&y);
    for(j-1;;j++){
        x=x-y*j;
        if(x>=0) printf("%d - %d = %d\n",x,y*j,x);
        else break;
    }
    return 0;
}