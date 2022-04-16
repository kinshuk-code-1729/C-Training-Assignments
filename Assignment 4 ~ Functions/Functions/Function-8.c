// Program to print all Armstrong numbers between given interval using functions
#include<stdio.h>
int armstrongchk(int x){
    int s=0,y,r;
    y=x;
    while(x!=0){
        r=x%10;
        s+=r*r*r;
        x/=10;
    }
    return (s==y);    
}
int all_armstrongs(int p,int q){
    printf("\nAll the armstrong numbers between %d and %d are.....\n",p,q);
    while(p<=q){
        if(armstrongchk(p)){
            printf("%d\t",p);
        }
        p++;
    }
    return p;
}
int main(){
    int UB,LB;
    printf("Enter Lower & Upper Limits : ");
    scanf("%d%d",&LB,&UB);
    all_armstrongs(LB,UB);
return 0;
}