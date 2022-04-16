// Program to find all prime numbers between given interval using functions
#include<stdio.h>
int primechk(int num){
    int i,z=0;
    for(i=2;i<=num/2;i++){
        if(!(num%i)){
            z=1;
            break;
        }
    }
    return (!z);
}
int all_primes(int x,int y){
    printf("\nAll the prime numbers between %d and %d are.....\n",x,y);
    while(x<=y){
        if(primechk(x)){
            printf("%d\t",x);
        }
        x++;
    }
    return x;
}
int main(){
    int start,end;
    printf("Enter the start and end of the range : ");
    scanf("%d%d",&start,&end);
    all_primes(start,end);
return 0;
}