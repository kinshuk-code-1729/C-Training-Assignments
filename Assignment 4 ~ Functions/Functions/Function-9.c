// Program to print all perfect numbers between given interval using functions
#include<stdio.h>
int perfectchk(int x){
    int s=0,i,y;
    y=x;
    for(i=1;i<x;i++){
        if(x%i==0){
            s+=i;
        }
    }
    return (y==s);
}
int all_perfects(int u,int v){
    printf("\nAll the perfect numbers between %d and %d are.....\n",u,v);
    while(u<=v){
        if(perfectchk(u)){
            printf("%d\t",u);
        }
        u++;
    }
    return u;
}
int main(){
    int L1,L2;
    printf("Enter upper & lower limits : ");
    scanf("%d%d",&L1,&L2);
    all_perfects(L1,L2);
return 0;
}